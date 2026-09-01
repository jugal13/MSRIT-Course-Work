#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/applications-module.h"
#include "ns3/traffic-control-module.h"
#include "ns3/flow-monitor-module.h"

using namespace ns3;

int main(int argc, char *argv[])
{
  double simulationTime = 10; //seconds
  std::string transportProt = "Udp";
  std::string socketType;

  if (transportProt.compare("Tcp") == 0)
  {
    socketType = "ns3::TcpSocketFactory";
  }
  else
  {
    socketType = "ns3::UdpSocketFactory";
  }

  NodeContainer nodes;
  nodes.Create(4);

  PointToPointHelper pointToPoint;
  pointToPoint.SetDeviceAttribute("DataRate", StringValue("10Mbps"));
  pointToPoint.SetChannelAttribute("Delay", StringValue("2ms"));
  //pointToPoint.SetQueue ("ns3::DropTailQueue", "Mode", StringValue ("QUEUE_MODE_PACKETS"), "MaxPackets", UintegerValue (1));

  NetDeviceContainer devices1, devices2, devices3;
  devices1 = pointToPoint.Install(nodes.Get(0), nodes.Get(2));
  devices2 = pointToPoint.Install(nodes.Get(1), nodes.Get(2));
  devices3 = pointToPoint.Install(nodes.Get(2), nodes.Get(3));

  InternetStackHelper stack;
  stack.Install(nodes);

  Ipv4AddressHelper address1, address2, address3;
  address1.SetBase("10.1.1.0", "255.255.255.0");
  address2.SetBase("10.1.2.0", "255.255.255.0");
  address3.SetBase("10.1.3.0", "255.255.255.0");

  Ipv4InterfaceContainer interfaces1 = address1.Assign(devices1);
  Ipv4InterfaceContainer interfaces2 = address2.Assign(devices2);
  Ipv4InterfaceContainer interfaces3 = address3.Assign(devices3);

  Ipv4GlobalRoutingHelper::PopulateRoutingTables();

  //Udp Flow
  uint16_t port = 7;
  Address localAddress(InetSocketAddress(Ipv4Address::GetAny(), port));
  PacketSinkHelper packetSinkHelper(socketType, localAddress);
  ApplicationContainer sinkApp = packetSinkHelper.Install(nodes.Get(3));

  sinkApp.Start(Seconds(0.0));
  sinkApp.Stop(Seconds(simulationTime + 0.1));

  uint32_t payloadSize = 1448;
  Config::SetDefault("ns3::TcpSocket::SegmentSize", UintegerValue(payloadSize));

  OnOffHelper onoff(socketType, Ipv4Address::GetAny());
  onoff.SetAttribute("OnTime", StringValue("ns3::ConstantRandomVariable[Constant=1]"));
  onoff.SetAttribute("OffTime", StringValue("ns3::ConstantRandomVariable[Constant=0]"));
  onoff.SetAttribute("PacketSize", UintegerValue(payloadSize));
  onoff.SetAttribute("DataRate", StringValue("50Mbps")); //bit/s
  ApplicationContainer apps;

  AddressValue remoteAddress(InetSocketAddress(interfaces3.GetAddress(1), port));
  onoff.SetAttribute("Remote", remoteAddress);
  apps.Add(onoff.Install(nodes.Get(1)));
  apps.Start(Seconds(1.0));
  apps.Stop(Seconds(simulationTime + 0.1));

  //Tcp Flow
  uint16_t port_tcp = 8;
  socketType = "ns3::TcpSocketFactory";
  Address localAddress_tcp(InetSocketAddress(Ipv4Address::GetAny(), port_tcp));
  PacketSinkHelper packetSinkHelper_tcp(socketType, localAddress_tcp);
  ApplicationContainer sinkApp_tcp = packetSinkHelper_tcp.Install(nodes.Get(3));

  sinkApp_tcp.Start(Seconds(0.0));
  sinkApp_tcp.Stop(Seconds(simulationTime + 0.1));

  //uint32_t payloadSize = 1448;

  OnOffHelper onoff_tcp(socketType, Ipv4Address::GetAny());
  onoff_tcp.SetAttribute("OnTime", StringValue("ns3::ConstantRandomVariable[Constant=1]"));
  onoff_tcp.SetAttribute("OffTime", StringValue("ns3::ConstantRandomVariable[Constant=0]"));
  onoff_tcp.SetAttribute("PacketSize", UintegerValue(payloadSize));
  onoff_tcp.SetAttribute("DataRate", StringValue("50Mbps")); //bit/s
  ApplicationContainer apps_tcp;

  AddressValue remoteAddress_tcp(InetSocketAddress(interfaces3.GetAddress(1), port));
  onoff_tcp.SetAttribute("Remote", remoteAddress_tcp);
  apps_tcp.Add(onoff.Install(nodes.Get(0)));
  apps_tcp.Start(Seconds(1.0));
  apps_tcp.Stop(Seconds(simulationTime + 0.1));

  FlowMonitorHelper flowmon;
  Ptr<FlowMonitor> monitor = flowmon.InstallAll();

  Simulator::Stop(Seconds(simulationTime + 5));
  Simulator::Run();

  Ptr<Ipv4FlowClassifier> classifier = DynamicCast<Ipv4FlowClassifier>(flowmon.GetClassifier());
  std::map<FlowId, FlowMonitor::FlowStats> stats = monitor->GetFlowStats();

  for (std::map<FlowId, FlowMonitor::FlowStats>::const_iterator i = stats.begin(); i != stats.end(); ++i)
  {
    Ipv4FlowClassifier::FiveTuple t = classifier->FindFlow(i->first);
    NS_LOG_UNCOND("Flow " << i->first << " (" << t.sourceAddress << " -> " << t.destinationAddress << ")\n");
    NS_LOG_UNCOND("  Tx Packet:   " << i->second.txPackets << "\n");
  }

  Simulator::Destroy();

  return 0;
}

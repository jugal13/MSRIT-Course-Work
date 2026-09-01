
#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/csma-module.h"
#include "ns3/applications-module.h"
#include "ns3/internet-apps-module.h"
#include "ns3/internet-module.h"

using namespace ns3;

int main(int argc, char *argv[])
{

  CommandLine cmd;
  cmd.Parse(argc, argv);

  // Here, we will explicitly create four nodes.
  NS_LOG_INFO("Create nodes.");
  NodeContainer c;
  c.Create(6);

  // connect all our nodes to a shared channel.
  NS_LOG_INFO("Build Topology.");
  CsmaHelper csma;
  csma.SetChannelAttribute("DataRate", DataRateValue(DataRate(5000000)));
  csma.SetChannelAttribute("Delay", TimeValue(MilliSeconds(2)));
  csma.SetDeviceAttribute("EncapsulationMode", StringValue("Llc"));
  NetDeviceContainer devs = csma.Install(c);

  // add an ip stack to all nodes.
  NS_LOG_INFO("Add ip stack.");
  InternetStackHelper ipStack;
  ipStack.Install(c);

  // assign ip addresses
  NS_LOG_INFO("Assign ip addresses.");
  Ipv4AddressHelper ip;
  ip.SetBase("192.168.1.0", "255.255.255.0");
  Ipv4InterfaceContainer addresses = ip.Assign(devs);

  NS_LOG_INFO("Create Source");
  //Config::SetDefault ("ns3::Ipv4RawSocketImpl::Protocol", StringValue ("2"));
  InetSocketAddress dst = InetSocketAddress(addresses.GetAddress(3));
  OnOffHelper onoff = OnOffHelper("ns3::UdpSocketFactory", dst);
  onoff.SetConstantRate(DataRate(15000));
  onoff.SetAttribute("PacketSize", UintegerValue(1200));

  ApplicationContainer apps = onoff.Install(c.Get(0));
  apps.Start(Seconds(1.0));
  apps.Stop(Seconds(10.0));

  NS_LOG_INFO("Create Sink.");
  PacketSinkHelper sink = PacketSinkHelper("ns3::Ipv4RawSocketFactory", dst);
  apps = sink.Install(c.Get(3));
  apps.Start(Seconds(0.0));
  apps.Stop(Seconds(11.0));

  NS_LOG_INFO("Create pinger");
  V4PingHelper ping = V4PingHelper(addresses.GetAddress(2));
  NodeContainer pingers;
  pingers.Add(c.Get(0));
  pingers.Add(c.Get(1));
  pingers.Add(c.Get(3));
  pingers.Add(c.Get(4));
  pingers.Add(c.Get(5));
  apps = ping.Install(pingers);
  apps.Start(Seconds(2.0));
  apps.Stop(Seconds(5.0));

  Simulator::Stop(Seconds(simulationTime + 5));
  FlowMonitorHelper flowmon;
  Ptr<FlowMonitor> monitor = flowmon.InstallAll();
  NS_LOG_INFO("Run Simulation.");
  Simulator::Run();

  Ptr<Ipv4FlowClassifier> classifier = DynamicCast<Ipv4FlowClassifier>(flowmon.GetClassifier());
  std::map<FlowId, FlowMonitor::FlowStats> stats = monitor->GetFlowStats();

  for (std::map<FlowId, FlowMonitor::FlowStats>::const_iterator i = stats.begin(); i != stats.end(); ++i)
  {
    Ipv4FlowClassifier::FiveTuple t = classifier->FindFlow(i->first);
    NS_LOG_UNCOND("Flow " << i->first << " (" << t.sourceAddress << " -> " << t.destinationAddress << ")\n");
    NS_LOG_UNCOND("  Tx Packet:   " << i->second.txPackets << "\n");
    NS_LOG_UNCOND("  Rx Packet:   " << i->second.rxPackets << "\n");
    NS_LOG_UNCOND("  Throughput: " << i->second.rxBytes * 8.0 / (i->second.timeLastRxPacket.GetSeconds() - i->second.timeFirstTxPacket.GetSeconds()) / 1024 / 1024 << " Mbps\n");
  }
  Simulator::Destroy();
  NS_LOG_INFO("Done.");
}

def Prims(graph):
	U,V = set([1]),set(graph.keys())
	result = []
	while len(U) != len(V):
		minw = float('inf')
		for u in U:
			for v in graph[u]:
				if v in V-U:
					if minw > graph[u][v]:
						minw = graph[u][v]
						mine = [u,v]
		mine.append(minw)
		result.append(mine)
		U.add(mine[1])
	return result

graph = {}
n = int(raw_input("Enter the number of nodes: "))
for i in range(n):
	graph[i+1]={}
	no = int(raw_input("Enter the number of nodes connected to %d: " % (i+1)))
	for j in range(no):
		node,weight = map(int,raw_input("Enter connected node and weight of edge: ").split())
		graph[i+1].update({node:weight})
for i in graph:
	print i,":",graph[i]
print "Tree: "
print Prims(graph)
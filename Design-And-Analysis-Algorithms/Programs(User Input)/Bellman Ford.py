def bellman(graph,source):
	dist = [float("inf")]*(len(graph)+1)
	dist[source] = 0
	parent = [None]*(len(graph)+1)
	edge = []
	for i in range(len(graph)):
		for u,v,w in graph:
			if dist[u] != float("inf") and dist[u]+w <dist[v]:
				dist[v] = dist[u]+w
				parent[v] = u
	for i in range(len(parent)):
		if parent[i] == None:
			continue
		edge.append([parent[i],i])
	return edge,dist

graph = []
n = int(input("Enter the number of nodes: "))
for i in range(n):
	no = int(input("Enter the number of nodes connected to %d: " % (i+1)))
	for j in range(no):
		node,weight = map(int,input("Enter connected node and weight:\n").split())
		graph.append([i+1,node,weight])
source = int(input("Enter the source node: "))
edge,dist = bellman(graph,source)
print("Graph input: ")
for i in graph:
	print (i)
print("Edges selcted: ", edge)
print("Distance: ", dist)
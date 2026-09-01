def dijkstras(s):
	d,visited = [999]*len(graph),[0]*(len(graph))
	d[s-1] = 0
	visited[s-1] = 1
	vertices = [s]
	while len(vertices) != len(graph):
		edge={}
		for u in vertices:
			for v in graph[u]:
				if visited[v-1] == 0:
					t = d[u-1]+graph[u][v]
					edge.update({t:[u,v]})
		min_d = min(edge.keys())
		node = edge[min_d][1]
		d[node-1] = min_d
		visited[node-1] = 1
		vertices.append(node)
	return d

graph = {}
n = int(input("Enter the number of nodes in graph: "))
for i in range(n):
	graph[i+1] = {}
	no = int(input("Enter the number of nodes connected to %d" % (i+1)))
	for j in range(no):
		node,weight = map(int,input("Enter connected node and weight of edge: ").split())
		graph[i+1].update({node:weight})
source = int(input("Enter source node: "))
for i in graph:
	print(i,":",graph[i])
print ("Distance array: ")
print(dijkstras(source))
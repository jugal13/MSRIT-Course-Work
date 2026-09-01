graph={
	1 : { 2 : 10, 5 : 100},
	2 : { 1 : 10, 3 : 50},
	3 : { 2 : 50, 4 : 20, 5 : 10},
	4 : { 3 : 20, 5 : 60},
	5 : { 1 : 100, 3 : 10, 4 : 60}
}

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

for i in graph:
	print(i,":",graph[i])
print ("Distance array: ")
print(dijkstras(1))

#time complexity: O(Elog V)
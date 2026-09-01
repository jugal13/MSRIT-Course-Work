graph={
	1 : [ 2, 3 ],
	2 : [ 1, 3, 4, 5 ],
	3 : [ 1, 2, 6, 7 ],
	4 : [ 2, 5, 8, 9],
	5 : [ 2, 4, 9],
	6 : [ 3, 7 ],
	7 : [ 3, 6 ],
	8 : [ 4, 9 ],
	9 : [ 4, 5, 8, 10 ],
	10 : [9]
}
source = 1

def bfs(graph,source):
	tree = []
	traversal = []
	layer = []
	i = 0
	visited = [0]*11
	visited[source] = 1
	layer.append([source])
	traversal.append(source)
	while layer[i]:
		r = []
		for u in layer[i]:
			for v in graph[u]:
				if visited[v] == 0:
					traversal.append(v)
					tree.append([u,v])
					visited[v] = 1
					r.append(v)
		layer.append(r)
		i += 1
	return traversal,tree,layer[:i]

traversal,tree,layer = bfs(graph,source)
print ("Graph Input:")
for i in graph:
	print(str(i)+": "+str(graph[i]))
print ("\nBFS Tree")
print (tree)
print ("\nBFS Layers")
print (layer)
print ("\nBFS Traversal")
for i in traversal:
	print (i)
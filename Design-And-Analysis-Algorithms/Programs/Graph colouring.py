graph={
	1 : [ 2, 3 ],
	2 : [ 1, 3, 4, 5 ],
	3 : [ 1, 2, 6, 7 ],
	4 : [ 2, 5, 8, 9 ],
	5 : [ 2, 4, 9 ],
	6 : [ 3, 7 ],
	7 : [ 3, 6 ],
	8 : [ 4, 9 ],
	9 : [ 4, 5, 8, 10 ],
	10 : [ 9 ]
}
source = 1
n = len(graph)
layer = []
color = [""]*len(graph)

def bfs(graph,source,n):
	tree = []
	traversal = []
	layer = []
	i = 0
	visited = [0]*(n+1)
	visited[source] = 1
	layer.append([source])
	traversal.append(source)
	while len(layer[i]) != 0:
				r = []
				for k in layer[i]:
						for j in graph[k]:
								if visited[j] == 0:
										traversal.append(j)
										visited[j] = 1
										r.append(j)
										if (i+1)%2 == 0:
												color[i+1] = "red"
										else:
												color[i+1] = "blue"
				layer.append(r)
				i += 1
	return traversal,tree,layer[:i],color[:i]

traversal,tree,layer,color = bfs(graph,source,n)
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
print ("\nGraph Coloring: ")
print (color)
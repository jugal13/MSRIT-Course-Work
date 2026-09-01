def bfs(graph,source):
	tree = []
	traversal = []
	layer = []
	i = 0
	visited = [0]*(len(graph)+1)
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

graph = {}
n = int(input("Enter number of nodes: "))
for i in range(n):
	nodes = list(map(int,input("Enter the nodes connected to %d: " % (i+1)).split()))
	graph.update({i+1:nodes})
source = int(input("Enter source node: "))
traversal,tree,layer,color = bfs(graph,source)
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
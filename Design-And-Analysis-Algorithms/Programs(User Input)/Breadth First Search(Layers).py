def bfs(graph,source,n):
	tree = []
	traversal = []
	layer = []
	i = 0
	visited = [0]*(n+1)
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

graph = {}
n = int(input("Enter number of nodes: "))
for i in range(n):
	nodes = list(map(int,input("Enter the nodes connected to %d: " % (i+1)).split()))
	graph.update({i+1:nodes})
source = int(input("Enter source node: "))
traversal,tree,layer = bfs(graph,source,n)
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
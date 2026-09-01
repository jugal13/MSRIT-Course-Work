def bfs(graph,source):
	queue = []
	visited = [0]*len(graph)
	traversal = []
	visited[source-1] = 1
	queue.append(source)
	while queue:
		traversal.append(queue[0])
		u=queue.pop(0)
		for v in graph[u]:
			if visited[v-1] == 0:
				visited[v-1] = 1
				queue.append(v) 
	return traversal

graph = {}
n = int(input("Enter number of nodes: "))
for i in range(n):
	nodes = list(map(int,input("Enter the nodes connected to %d: " % (i+1)).split()))
	graph.update({i+1:nodes})
source = int(input("Enter source node: "))
traversal=bfs(graph,source)
print ("Traversal: ")
for i in traversal:
	print(i)
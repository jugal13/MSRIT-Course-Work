def dfs(graph,source):
	visited[source-1] = 1
	print source
	for k in graph[source]:
		if visited[k-1] == 0:
			dfs(graph,k)

graph = {}
n = int(raw_input("Enter number of nodes: "))
for i in range(n):
	nodes = list(map(int,raw_input("Enter the nodes connected to %d: " % (i+1)).split()))
	graph.update({i+1:nodes})
visited = [0]*len(graph)
source = int(raw_input("Enter source node: "))
print "Traversal: "
dfs(graph,source)
graph={
	1 : { 2 : 4, 4 : 8 },
	2 : { 1 : 4, 4 : 1, 3 : 3 },
	3 : { 2 : 3, 4 : 7, 5 : 8 },
	4 : { 2 : 1, 3 : 7, 1 : 8, 5 : 3 },
	5 : { 2 : 8, 4 : 3 }
}

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

for i in graph:
	print (i,":",graph[i])
print ("Tree: ")
print(Prims(graph))
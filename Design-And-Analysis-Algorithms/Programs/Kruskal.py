graph = [
	[ 1, 2, 10 ],
	[ 1, 5, 5 ],
	[ 2, 4, 6 ],
	[ 5, 3, 7 ],
	[ 5, 4, 3 ],
	[ 2, 3, 1 ],
	[ 4, 3, 2 ]
]
graph.sort(key=lambda x:x[2])
parent = [-1]*(len(graph)+1)

def find(i):
	if parent[i] == -1:
		return i
	else:
		return find(parent[i])

def union(i,j):
	i_s = find(i)
	j_s = find(j)
	parent[i_s] = j_s

def Kruskals():
	result = []
	for k in range(4):
		u = graph[k][0]
		v = graph[k][1]
		u_s = find(u)
		v_s = find(v)
		if v_s != u_s:
			result.append([u,v,graph[k][2]])
			union(u,v)
	return result
	
for i in graph:
	print (i)
print ("Tree: ")
print (Kruskals())
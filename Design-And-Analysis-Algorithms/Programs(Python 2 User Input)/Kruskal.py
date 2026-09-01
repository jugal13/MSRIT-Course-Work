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

graph = []
parent = [-1]*(len(graph)+1)
n = int(raw_input("Enter the number of nodes: "))
for i in range(n):
	no = int(raw_input("Enter the number of nodes connected to %d: " % (i+1)))
	for j in range(no):
		node,weight = map(int,raw_input("Enter the node and weight: ").split())
		graph.append([(i+1),node,weight])
graph.sort(key=lambda x:x[2])
for i in graph:
	print i
print "Tree: "
print Kruskals()
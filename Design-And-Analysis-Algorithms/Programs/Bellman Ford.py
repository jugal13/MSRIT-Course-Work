graph = [
  [1, 2, -4],
  [1, 0, -3],
  [2, 4, -1],
  [2, 5, -2],
  [3, 2, 8],
  [3, 0, 3],
  [4, 1, 6],
  [4, 0, 4],
  [5, 3, -3],
  [5, 0, 2]
]
source = 1

def bellman(graph, source):
  dist = [float("inf")]*6
  dist[source] = 0
  parent = [None]*6
  edge = []
  for i in range(5):
    for u, v, w in graph:
      if dist[u] != float("inf") and dist[u]+w < dist[v]:
        dist[v] = dist[u]+w
        parent[v] = u
  for i in range(len(parent)):
    if parent[i] == None:
      continue
    edge.append([parent[i], i])
  return edge, dist

edge, dist = bellman(graph, source)
print("Graph input: ")
for i in graph:
  print(i)
print("Edges selcted: ", edge)
print("Distance: ", dist)

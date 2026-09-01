mat = []
m, n = map(int,input("Enter number of rows and colums").split())
for i in range(m):
  row = []
  for j in range(n):
    row.append(i*j)
  mat.append(row)
print(mat)
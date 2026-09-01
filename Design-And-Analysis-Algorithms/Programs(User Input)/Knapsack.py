def matrix(M,W):
	for i in range(1,len(items)+1):
		row = [0] 
		wi = items[i][0]
		vi = items[i][1]
		for w in range(1,W+1):
			if w < wi:
				row.append(M[i-1][w])
			else:
				row.append(max(M[i-1][w],vi+M[i-1][w-wi]))
		M.append(row)
	return M,M[len(items)][W]

def knapsack(M,W):
	result = []
	i = len(items)
	k = W
	while i > 0 and k > 0:
		wi = items[i][0]
		if M[i][k]!=M[i-1][k]:
			result.append(i)
			k = k-wi
		i = i-1
	return result

items={}
n = int(input("Enter the number of items: "))
for i in range(n):
	a = list(map(int,input("Enter the weight and value of %d: " % (i+1)).split()))
	items.update({(i+1):a})
W = int(input("Enter the max weight of knapsack: "))
M = [[0]*(W+1)]
M,mat = matrix(items,M,W)
result = knapsack(items,M,W)
for i in M:
	print (i)
print ("Max value for knapsack: "+str(mat))
print ("Items selected for knapsack: "+str(result))
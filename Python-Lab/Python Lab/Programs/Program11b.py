def subsetSum(arr,w):
	for i in range(len(arr)-2):
		for j in range(i+1,len(arr)-1):
			for k in range(j+1,len(arr)):
				if arr[i]+arr[j]+arr[k]==w:
					return True
	return False
numbers = list(map(int, input("Enter the list\n").split()))
w=int(input("Enter the target: "))
print(subsetSum(numbers,w))
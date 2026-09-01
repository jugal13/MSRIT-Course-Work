import time
import random
a = [8,4,6,1,2,5,10]
L = []

def partition(arr,low,high):
	i = low-1
	pivot = arr[high]
	for j in range(low,high):
		if arr[j] <= pivot:
			i += 1
			arr[i], arr[j] = arr[j], arr[i]
	arr[i+1], arr[high] = arr[high], arr[i+1]
	return i+1

def quick_sort(arr,low,high):
	if low < high:
		pi = partition(arr,low,high)
		quick_sort(arr,low,pi-1)
		quick_sort(arr,pi,high)

print (a)
quick_sort(a,0,len(a)-1)
print (a)
for n in range(500,5500,500):
	L = random.sample(range(10000),n)
	start = time.clock()
	quick_sort(L,0,(len(L)-1))
	end = time.clock()
	print (str(n)+"\t"+str(end-start))

#Divide and Conquer
#Time Complexity O(nlog n)
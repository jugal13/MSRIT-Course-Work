import random
import time

def merge(A,B):
	C = []
	while A and B:
		if A[0] < B[0]:
			C.append(A.pop(0))
		else:
			C.append(B.pop(0))
	if A:
		C += A
	if B:
		C += B
	return C

def merge_sort(arr):
	if len(arr) == 1:
		return arr
	mid = (len(arr)-1)//2
	A = merge_sort(arr[:mid+1])
	B = merge_sort(arr[mid+1:])
	C = merge(A,B)
	return C
a = random.sample(range(100),10)
b = merge_sort(a)
print (a)
print (b)
print ("n\ttime")
for n in range(500,5500,500):
	a = random.sample(range(10000),n)
	start = time.clock()
	b = merge_sort(a)
	end = time.clock()
	print (str(n)+"\t"+str(end-start))

#Divide and Conquer 
#Time Complexity O(nlog n)
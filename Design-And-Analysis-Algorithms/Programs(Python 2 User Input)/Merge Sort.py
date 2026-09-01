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
print a
print b
print "n\ttime"
for n in range(500,5500,500):
	arr = list(map(int,raw_input("Enter array of numbers of size %d: " % n).split()))
	tm = time.clock()
	a = merge_sort(arr)
	end = time.clock()
	print str(n),"\t",str(end-start)
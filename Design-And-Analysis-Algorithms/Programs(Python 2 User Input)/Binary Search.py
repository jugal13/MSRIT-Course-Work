import time

def binary_search (A, low, high, key):
	if high >= low:
		mid = (low+high)//2
		if A[mid] == key:
			return mid+1
		elif A[mid] > key:
			return binary_search(A, low, mid-1, key)
		else:
			return binary_search(A, mid+1, high, key)
	return -1

A = list(map(int,raw_input("Enter array of numbers\n").split()))
key = int(input("Enter key: "))
A.sort()
print (A)
start = time.clock()
print binary_search(A,0,len(A)-1,key)
end = time.clock()
print "Time Taken: ",str(end-start)
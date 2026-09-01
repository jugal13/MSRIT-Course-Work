import time

def linear_search(A,key):
	for i in range(len(A)):
		if A[i] == key:
			return i
	return -1

A = list(map(int,input("Enter array of numbers: ").split()))
key = int(input("Enter key yo be searched for: "))
print (A)
start = time.clock()
print (linear_search(A,key))
stop = time.clock()
print (stop-start)
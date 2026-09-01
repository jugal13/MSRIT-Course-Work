import time

def linear_search(A,key):
	for i in range(len(A)):
		if A[i] == key:
			return i
	return -1

A = [x for x in range(10)]
key = 50
print (A)
start = time.clock()
print (linear_search(A))
stop = time.clock()
print (stop-start)
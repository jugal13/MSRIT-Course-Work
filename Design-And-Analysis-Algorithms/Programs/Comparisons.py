import random
from time import clock

def selection_sort(A) :
	m = 0
	for i in range(n-1) :
		m = i
		for j in range(i+1, n) :
			if A[j] < A[m] :
				m = j
		A[i] , A[m] = A[m] , A[i]
	return A

def insertion_sort(A) :
	for i in range(1,len(A)) :
		key = A[i]
		j = i - 1
		while j >= 0 and A[j] > key :
			A[j+1] = A[j]
			j -= 1
		A[j+1] = key
	return A

def merge(A,B):
	m = []
	if A[0] <= B[0]:
		m.append(A.pop(0))
	else:
		m.append(B.pop(0))
	m += A
	m += B
	return m

def merge_sort(A):
	if len(A) <= 1:
		return A
	mid = (len(A)-1)//2
	B = merge_sort(A[:mid+1])
	C = merge_sort(A[mid+1:])
	D = merge(B,C)
	return D

sizes = [100,200,300,500,1000,2000,3000,5000,6000,8000,10000,50000]
print ("n\tMerge\tInsertion\tSelection\n")
for i in sizes:
	x = random.sample(range(i),i)
	tm = clock()
	xm = merge_sort(x)
	tm = clock() - tm
	ti = clock()
	xi = insertion_sort(x)
	ti = clock() - ti
	ts = clock()
	xs = selection_sort(x)
	ts = clock() - ts
	print (i,"\t",tm,"\t",ti,"\t",ts,"\n")
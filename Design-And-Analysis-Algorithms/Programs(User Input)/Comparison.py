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

final = []
sizes = list(map(int,input("Enter list of sizes to compare: ").split()))
for i in sizes:
	arr = list(map(int,input("Enter array of numbers of size %d: " % i).split()))
	tm = clock()
	a = merge_sort(arr)
	tm = clock() - tm
	arr = list(map(int,input("Enter array of numbers of size %d: " % i).split()))
	ti = clock()
	b = insertion_sort(arr)
	ti = clock() - ti
	arr = list(map(int,input("Enter array of numbers of size %d: " % i).split()))
	ts = clock()
	c = selection_sort
	ts = clock() - ts
	final.append([i,tm,ti,ts])
print ("n\tMerge\tInsertion\tSelection\n")
for i in final:
	print (str(i[0])+"\t"+str(i[1])+"\t"+str(i[2])+"\t"+str(i[3]))
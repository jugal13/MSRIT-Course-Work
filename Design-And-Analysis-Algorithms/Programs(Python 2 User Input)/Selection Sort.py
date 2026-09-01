import random
import time

k = 1000

def selection_sort(arr):
	for i in range(len(arr)):
		m = i
		for j in range(i+1,len(arr)):
			if arr[m] > arr[j]:
				m = j
		a[m], arr[i] = arr[i], arr[m]

a = random.sample(range(100),10)
b = selection_sort(a)
print a
print b
print "n\ttime"
for n in range(500,5500,500):
	a = list(map(int,raw_input("Enter %d number of elements: " % n)))
	start = time.clock()
	b = selection_sort(a)
	end = time.clock()
	print str(n),"\t",str(end-start)
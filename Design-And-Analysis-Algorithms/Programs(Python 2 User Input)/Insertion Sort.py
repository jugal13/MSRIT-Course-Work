import random
import time
def insertion_sort(arr):
	for i in range(1,len(arr)):
		key = arr[i]
		j = i-1
		while j >= 0 and key < arr[j]:
			arr[j+1] = arr[j]
			j -= 1
		arr[j+1] = key
	return arr

print "n\ttime"
for n in range(10,110,10):
	a = list(map(int,raw_input("Enter array of numbers(%d): " % n).split()))
	start = time.clock()
	b = insertion_sort(a)
	end = time.clock()
	print str(n),"\t",str(end-start)
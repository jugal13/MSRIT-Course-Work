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

a = random.sample(range(100),10)
b = insertion_sort(a)
print (a)
print (b)
print ("n\ttime")
for n in range(500,5500,500):
	a = random.sample(range(10000),n)
	start = time.clock()
	b = insertion_sort(a)
	end = time.clock()
	print(str(n)+"\t"+str(end-start))

#Best case O(n)
#Average case O(n^2)
#Worst case O(n^2)
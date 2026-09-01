def merge_count(A,B):
	C,r = [],0
	while A and B:
		if A[0] < B[0]:
			C.append(A.pop(0))
		else:
			C.append(B.pop(0))
			r += len(A)
	if A:
		C += A
	if B:
		C += B
	return C,r

def sort_count(arr):
	if len(arr) == 1:
		return arr,0
	mid = (len(arr)-1)//2
	A,ra = sort_count(arr[:mid+1])
	B,rb = sort_count(arr[mid+1:])
	C,r = merge_count(A,B)
	return C,(ra+rb+r)

a = [7,6,5,4,3,2,1]
b,count = sort_count(a)
print ("Array: "+str(a))
print ("Number of inversions: "+str(count))
#Divide and Conquer
#Time Complexity O(nlog n)
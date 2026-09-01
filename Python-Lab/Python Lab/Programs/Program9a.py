def sorting(*args):
	a=list(args)
	for i in range(len(a)):
		for j in range(len(a)-i-1):
			if a[j]>a[j+1]:
				a[j],a[j+1]=a[j+1],a[j]
	return a
print("[1, 3, 7, 5, 2, 6, 4]")
arr=sorting(1,3,7,5,2,6,4)
print(arr)
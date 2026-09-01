import random
def rotate_left(arr):
	return [arr[1],arr[2],arr[0]]
arr=[random.randint(1,100) for _ in range(3)]
print(arr)
arr1=rotate_left(arr)
print(arr1)
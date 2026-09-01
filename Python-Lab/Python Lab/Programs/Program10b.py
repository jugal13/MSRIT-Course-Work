try:
	print(1+"msrit")
except TypeError:
	print("1 is int and msrit is string type\n")
try:
	L=[1,2,3]
	print(L[4])
except IndexError:
	print("4 is out of bounds for list of length 3\n")
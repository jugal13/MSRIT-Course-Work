class MarksNotElligible(exception):
	def __init__(self):
		pass
m=[]
try:
	for i in range(3):
		m[i]=int(input("enter subject %d cie marks: "%(i+1)))
	if m[0]<0 or m[1]<0 or m[2]<0:
		raise ValueError
	if m[0]<20 or m[1]<20 or m[2]<20:
		raise MarksNotElligible
except ValueError:
	print("Marks are not a valid interger")
except MarksNotElligible:
	print("Not Elligible for exam")
import math
class RadiusError(Exception):
	def __init__(self):
		pass
def area(radius):
	return math.pi*(radius**2)
def circumference(radius):
	return 2*math.pi*radius
try:
	radius=float(input("Enter radius: "))
	if radius<0:
		raise RadiusError
	print("Radius: "+str(radius))
	print("Area: "+str(area(radius)))
	print("circumference: "+str(circumference(radius)))
except RadiusError:
	print("Invalid Radius")
class Triangle():
	def __init__(self,angle1,angle2,angle3):
		self.angle1=angle1
		self.angle2=angle2
		self.angle3=angle3
		self.number_of_sides=3
	def check_angles(self):
		if (self.angle3+self.angle2+self.angle1)==180:
			return True
		return False
angles=[]
for i in range(3):
	angle=int(input("Enter angle %d: " %(i+1)))
	angles.append(angle)
my_triangle=Triangle(angles[0],angles[1],angles[2])
print(my_triangle.number_of_sides)
print(my_triangle.check_angles())
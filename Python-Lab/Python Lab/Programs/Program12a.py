class city():
	def __init__(self,cityname,places):
		self.cityname=cityname
		self.places=places
	def add(self,place):
		self.places.extend(place)
	def remove(self,place):
		self.places.remove(place)
	def display(self):
		return self.places
cityname=input("Enter city name: ")
obj=city(cityname,[])
while True:
	print("1. Add place/places\n2. Remove Place\n3. Display All places\n4. Exit\n")
	ch=int(input("Enter choice: "))
	if ch==1:
		place=input("Enter places list\n").split()
		obj.add(place)
	elif ch==2:
		place=input("Enter place to be removed: ")
		obj.remove(place)
	elif ch==3:
		print("City name: "+str(obj.cityname))
		print("Places:\n")
		print(obj.display())
	elif ch==4:
		print("Operation Complete")
		break
	else:
		print("Invalid Option")
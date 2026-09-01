class Vehicle():
	def __init__(self,wheels):
		self.wheels=wheels
class Car(Vehicle):
	def __init__(self,wheels,name,price):
		Vehicle.__init__(self,wheels)
		self.name=name
		self.price=price
		self.fuel="YES"
	def output(self):
		print("Car:")
		print("Name: "+self.name)
		print("Price: "+str(self.price))
		print("Number of wheels: "+str(self.wheels))
		print("Fuel used: "+self.fuel)
class Bike(Vehicle):
	def __init__(self,wheels,name,price):
		Vehicle.__init__(self,wheels)
		self.name=name
		self.price=price
class Pedal_bikes(Bike):
	def __init__(self,wheels,name,price):
		Bike.__init__(self,wheels,name,price)
		self.fuel="NO"
	def output(self):
		print("Pedal:")
		print("Name: "+self.name)
		print("Price: "+str(self.price))
		print("Number of wheels: "+str(self.wheels))
		print("Fuel used: "+self.fuel)
class Motor_bikes(Bike):
	def __init__(self,wheels,name,price):
		Bike.__init__(self,wheels,name,price)
		self.fuel="YES"
	def output(self):
		print("Motor:")
		print("Name: "+self.name)
		print("Price: "+str(self.price))
		print("Number of wheels: "+str(self.wheels))
		print("Fuel used: "+self.fuel)
wheels=int(input("Enter the number of wheels: "))
name=input("Enter name of vehicle: ")
price=float(input("Enter Price of vehicle: "))
fuel=input("Enter if fuel is used or not: ")
if wheels==2:
	if fuel.lower()=="yes":
		a=Motor_bikes(wheels,name,price)
	else:
		a=Pedal_bikes(wheels,name,price)
else:
	a=Car(wheels,name,price)
a.output()
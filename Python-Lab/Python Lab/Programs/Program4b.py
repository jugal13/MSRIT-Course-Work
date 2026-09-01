class Adder():
	def __init__(self,data=[]):
		self.data=data
	def add(self,x,y):
		print("Not Implemented")
	def __add__(self,other):
		self.data+=other
class listadder(Adder):
	def __init__(self,a=[]):
		self.a=a
	def add(self,x,y):
		return x+y
	def __add__(self,other):
		return listadder(self.a+other.a)
class dictadder(Adder):
	def __init__(self,b={}):
		self.b=b
	def add(self,x,y):
		x.update(y)
		return x
	def __add__(self,other):
		z=self.b.copy()
		z.update(other.b)
		return dictadder(z)
x=Adder()
x.add([1,2],[3,4])
y1=listadder()
print(y1.add([1,2,3],[4,5,6]))
y=listadder([1,2,3])
z=listadder([4,5,6,7])
w=y+z
print(w.a)
p1=dictadder()
print(p1.add({1:1},{2:2}))
p=dictadder({1:1,2:2})
q=dictadder({3:3,4:4})
r=p+q
print(r.b)
class Rocket:
  def __init__(self,x,y):
    self.x = x
    self.y = y

  def display(self):
    print("Coordinates: x:"+str(self.x)+", y: "+str(self.y))

obj = []
for i in range(1,6):
  obj.append(Rocket((i*3),(i*4-2)))
for i in obj:
  i.display()
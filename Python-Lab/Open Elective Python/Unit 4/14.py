class Rectangle:
  def __init__(self,length,width):
    self.length = length
    self.width = width
  
  def area(self):
    return self.length * self.width

R = Rectangle(15,20)
print(R.area())
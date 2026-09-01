class Student:
  def set(self,name, age=None):
    self.name=name
    if age is not None:
      self.age = age

  def display(self):
    print(self.__dict__)

s1 = Student()
s1.set("Hello")
s2 = Student()
s2.set("Test",21)
s1.display()
s2.display()
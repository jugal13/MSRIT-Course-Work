class Array:
  def __init__(self,num):
    self.num = num
  
  def numbers(self,target):
    for i in range(len(self.num)):
      for j in range(i+1,len(self.num)):
        if self.num[i]+self.num[j] == target:
          return (i,j)

A = Array([1,2,3,4,5,6])
print(A.numbers(5))
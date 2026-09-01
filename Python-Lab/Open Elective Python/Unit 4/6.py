class Real:
  def __init__(self,num):
    self.num = num
  
  def numbers(self):
    for i in range(len(self.num)):
      for j in range(i+1,len(self.num)):
        for k in range(j+1, len(self.num)):
          if self.num[i]+self.num[j]+self.num[k]==0:
            return (self.num[i],self.num[j],self.num[k])
    return None

R = Real([1,0,3,4,2,514,214123,213])
print(R.numbers())
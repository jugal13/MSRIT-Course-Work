class PowerSet:
  def __init__(self,num):
    self.num = num
  
  def printPowerSet(self): 
    _list = [] 
    for i in range(2**len(self.num)): 
      subset = "" 
      for j in range(len(self.num)): 
        if (i & (1 << j)) != 0: 
          subset += str(self.num[j]) + "|"
      if subset not in _list and len(subset) > 0: 
        _list.append(subset) 
    for subset in _list: 
      self.num = subset.split('|') 
      for string in self.num: 
        print(string, end = " ") 
      print() 

P = PowerSet([1,2,3])
P.printPowerSet()
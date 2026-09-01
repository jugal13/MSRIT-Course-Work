class Country:
  def __init__(self, name, population, area):
    self.name = name
    self.population = population
    self.area = area
  
  def printclass(self):
    print("Country: "+self.name+" Population: "+str(self.population)+" Area: "+str(self.area))
  
c =Country("India",1700000000,700000000)
c.printclass()

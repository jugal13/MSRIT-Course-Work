class String:
  def __init__(self,s):
    self.s = s

  def rev(self):
    return " ".join(self.s.split()[::-1])

S = String("Hello World")
print(S.rev())
class String:
  def get_String(self,s):
    self.s = s

  def print_String(self):
    print(self.s.upper())

S = String()
S.get_String("Hello")
S.print_String()
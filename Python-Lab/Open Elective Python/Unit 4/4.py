class NegativeException(Exception):
  pass

try:
  n = int(input("Enter positive number: ")) 
  if n < 0:
    raise NegativeException()
  print("Num: ",n)
except NegativeException:
  print("Negative integer")
except ValueError:
  print("Entered value is not integer")
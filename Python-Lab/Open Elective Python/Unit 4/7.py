import math
class NegativeException(Exception):
  pass

def MySqrt(num):
  try:
    if (num<0):
      raise NegativeException()
    print(math.sqrt(num))
  except NegativeException:
    print("Cannot find sqrt of negative number")

n = int(input("Enter number: "))
MySqrt(n)

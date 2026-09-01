def FtoC(f):
  return (((f-32)/9)*5)

def CtoF(c):
  return (((9*c)/5)+32)

ch = int(input("Choose 1. C to F or 2. F to C: "))
temp = int(input("Enter temp: "))
if ch == 1:
  print("F: ",CtoF(temp))
else:
  print("C: ",FtoC(temp))
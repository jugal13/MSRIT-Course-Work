a,b = map(int,input("enter 2 numbers separated by comma: ").split(","))
try:
  res = a/b
  print("Q: ",res)
except ZeroDivisionError:
  print("Dvision by 0 not possible")
finally:
  print("Operation complete")
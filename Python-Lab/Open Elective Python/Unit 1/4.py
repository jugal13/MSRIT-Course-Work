a,b,c =  map(int,input("Enter 3 sides: ").split())
if a==b and b==c and c==a:
  print("Equi;ateral")
elif a==b or b==c or c==a:
  print("Isosceles")
else:
  print("Scalene")
  
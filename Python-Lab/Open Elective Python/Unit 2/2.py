num = list(map(int,input("Enter list of numbers: ").split())
c = 0
for i in num:
  if i == 4:
    c+=1
print("Count of 4: ",c)
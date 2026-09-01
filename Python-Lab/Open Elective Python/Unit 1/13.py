num = list(map(int,input("Enter numbers: ").split()))
c = 0
for i in num:
  if i<100:
    c+=i
print(c)
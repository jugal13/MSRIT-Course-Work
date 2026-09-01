count=0
num = list(map(int,input("Enter numbers: ").split()))
for i in num:
  print(num)
  if i>0 and i<100:
    count+=i
print(count)
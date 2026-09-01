s = int(input("Enter string: "))
count = {}
for i in s:
  if i in count:
    count[i]+=1
  else:
    count[i]=1
print(count)

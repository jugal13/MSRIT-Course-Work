num = list(map(int,input("Enter numbers: ")))
no, ne = 0, 0
for i in num:
  if i % 2:
    no += 1
  else:
    ne +=1
print("Even count: ",ne)
print("Odd count: ",no)

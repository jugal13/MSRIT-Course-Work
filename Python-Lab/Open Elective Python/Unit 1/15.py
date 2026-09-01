def check_num(n):
  for i in list(str(n)):
    if int(i)%2 == 0:
      return False
  return True
for i in range(100,401):
  if check_num(i):
    print(i,end=",")
print()
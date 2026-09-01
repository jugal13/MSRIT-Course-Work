def check(n):
  if n%5==0 and n%7==0:
    return True
  return False

for i in range(1500,2701):
  if check(i):
    print(i)
l = []
for i in range(1,31):
  if i**2 < 31:
    l.append(i**2)
print(l)
for i in range(5):
  l.pop(0)
print(l)
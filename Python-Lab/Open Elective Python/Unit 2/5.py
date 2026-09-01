s = input("Enter list of words: ").split()
n = int(input("Enter max length: "))
final = []
for i in s:
  if len(i) < n:
    final.append(i)
print(final)
c = {
  "lower": 0,
  "upper": 0
}
s = input("Enter string: ")
for i in s:
  if i.isupper():
    c["upper"] += 1
  elif i.islower():
    c["lower"] += 1

print(c)
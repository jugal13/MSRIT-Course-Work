vowels = "aeiouAEIOU"
c = 0
s = input("Enter string: ")
for i in s:
  if i in vowels:
    c += 1
print(c)
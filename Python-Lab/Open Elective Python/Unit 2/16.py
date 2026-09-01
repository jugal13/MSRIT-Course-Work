def char_freq(s):
  count = {}
  for i in s:
    if i in count:
      count[i] += 1
    else:
      count[i] = 1
  return count
s = input("Enter string: ")
c = char_freq(s)
for i in c:
  print(str(i)+","+str(c[i]),end=" ")
print()
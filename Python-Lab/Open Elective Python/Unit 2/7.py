def char_freq(s):
  count = {}
  for i in s:
    if i in count:
      count[i] += 1
    else:
      count[i] = 1
  return count
s = input("Enter string: ")
print(char_freq(s))
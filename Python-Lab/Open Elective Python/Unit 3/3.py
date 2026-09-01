count = {}
with open("3.py","r") as fin:
  for line in fin:
    for char in line:
      if char in count:
        count[char]+=1
      else:
        count[char]=1
print(count)
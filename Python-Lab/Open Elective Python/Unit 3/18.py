count = {}
with open("input","r") as fin:
  for line in fin:
    for word in line.split():
      if word in count:
        count[word]+=1
      else:
        count[word]=1
print(count)
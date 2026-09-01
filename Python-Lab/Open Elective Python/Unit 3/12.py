lines = []
cur = ""
with open("input","r") as fin:
  for i in fin:
    line = i.split("\n")[0]
    lines.append(line)
for line in lines:
  for words in line.split():
    if (len(words)>len(cur)):
      cur = words
print(cur)
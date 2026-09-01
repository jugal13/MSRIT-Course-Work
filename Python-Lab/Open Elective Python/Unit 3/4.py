lines = []
with open("input","r") as fin:
  for i in fin:
    lines.append(i)
lines.sort()
with open("output","w") as fout:
  fout.writelines(lines)
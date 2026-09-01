count=0
with open("original_text","r") as fin:
  for i in fin:
    for j in i:
      if j=='c':
        count+=1
print(count)
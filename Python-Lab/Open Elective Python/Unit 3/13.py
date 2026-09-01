dup = [1,1,3,3,4,5,9,9]
final = []
for i in dup:
  if i not in final:
    final.append(i)
print(final)
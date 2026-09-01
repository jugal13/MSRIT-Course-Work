shop=["wheat 1kg 25.00","rice 1kg 40.00"]
with open("shopper_list.text","w") as fout:
  for i in shop:
    fout.write(i)
    fout.write("\n")
final = []
with open("shopper_list.text","r") as fin:
  for i in fin:
    final.append(i.split())
print(final)
phone = {}
final = {}
with open("phonebook","r") as fin:
  for i in fin:
    name,number=i.split(' - ')
    number=number.split("\n")[0]
    phone.update({name:number})
  for i in sorted(phone.keys()):
    final.update({i:phone[i]})
  print(final)
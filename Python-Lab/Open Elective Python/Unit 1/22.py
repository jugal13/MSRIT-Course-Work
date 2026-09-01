s = input("Enter string")
ca,cd = 0,0
for i in s:
  if i.isalpha():
    ca += 1
  elif i.isdigit():
    cd += 1
print("Letters: ",ca)
print("Digits: ",cd)
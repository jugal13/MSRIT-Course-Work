lchlist=[]
uchlist=[]
nums=[]
special=["$","#","@"]
for ch in map(chr,range(ord('a'), ord('z')+1)):
  lchlist.append(ch)
for ch in map(chr,range(ord('A'), ord('Z')+1)):
  uchlist.append(ch)
for num in range(0,10):
  nums.append(str(num))
password = input()
if len(password) < 6:
  print("Password is too short")
elif len(password) > 16:
  print("Passowrd is too long")
elif not any(i in lchlist for i in password):
  print("Password must have one lowercase")
elif not any(i in uchlist for i in password):
  print("Password must have one uppercase")
elif not any(i in nums for i in password):
  print("Password must have one number")
elif not any(i in special for i in password):
  print("Password must have one special character")
else:
  print("Password is correct")
lchlist=[]
uchlist=[]
nums=[]
for ch in map(chr,range(ord('a'), ord('z')+1)):
  lchlist.append(ch)
for ch in map(chr,range(ord('A'), ord('Z')+1)):
  uchlist.append(ch)
for num in range(0,10):
  nums.append(str(num))
password = input()
if len(password)<6 or len(password)>18:
  print("Invalid length")
elif not any(i in lchlist for i in password):
  print("Password must have one lowercase")
elif not any(i in uchlist for i in password):
  print("Password must have one uppercase")
elif not any(i in nums for i in password):
  print("Password must have one number")
else:
  print("Password is correct")
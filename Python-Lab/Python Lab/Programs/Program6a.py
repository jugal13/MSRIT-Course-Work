li=[]
print("Input\n")
while True:
	n=input().split()
	if n[-1]=="quit":
		n.remove("quit")
		li.append(n)
		break
	else:
		li.append(n)
print("\nOutput\n")
for i in li:
	words=i[::-1]
	s=" ".join(words)
	print(s)
def vowelCount(string):
	count=[0]*5
	for i in string:
		if i=='a' or i=='A':
			count[0]+=1
		elif i=='e' or i=='E':
			count[1]+=1
		elif i=='i' or i=='I':
			count[2]+=1
		elif i=='o' or i=='O':
			count[3]+=1
		elif i=='u' or i=='U':
			count[4]+=1
		else:
			continue
	return count
string=input("Enter the string: ")
out=vowelCount(string)
print(out)
for i in range(len(out)):
	if i==0:
		print("Count of a: "+str(out[i]))
	elif i==1:
		print("Count of e: "+str(out[i]))
	elif i==2:
		print("Count of i: "+str(out[i]))
	elif i==3:
		print("Count of o: "+str(out[i]))
	elif i==4:
		print("Count of u: "+str(out[i]))
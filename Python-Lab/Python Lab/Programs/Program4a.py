def Initials(name):
	return ''.join(list(map(lambda x:x[0],name.split())))
name=input("Enter full name: ")
print("Initials are: "+Initials(name))

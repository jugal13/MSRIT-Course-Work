def add(directory):
	phone=input("Phone name: ")
	price=int(input("Price: "))
	directory.update({phone:price})
	return directory
def search(directory):
	key=input("Enter phone name: ")
	if key in directory:
		return key,directory[key]
	return key,"Not found"
def same(directory):
	flipped={}
	for key, value in directory.items():
		if value not in flipped:
			flipped[value]=[key]
		else:
			flipped[value].append(key)
	return flipped
def remove(directory):
	key=input("Enter phone to remove: ")
	del directory[key]
	return directory
def display(directory):
	s=sorted(directory,key=lambda x: directory[x])
	for i in s:
		print(i,directory[i])
	return
directory={}
while True:
	print("\n1. Add an entry\n2. Search\n3. Same Price\n4. Remove an entry\n5. Display\n6. Exit\n")
	ch=int(input("Enter choice: "))
	if ch==1:
		directory=add(directory)
		print(directory)
	elif ch==2:
		key,value=search(directory)
		print(key+": "+str(value))
	elif ch==3:
		print(same(directory))
	elif ch==4:
		directory=remove(directory)
		print(directory)
	elif ch==5:
		display(directory)
	elif ch==6:
		print("Operation Complete\n")
		break
	else:
		print("Invalid entry\n")
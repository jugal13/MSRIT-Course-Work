def add(mean):
	key=input("Enter word: ")
	value=input("Enter meaning of word: ")
	mean.update({key:value})
	return mean
def search(mean):
	key=input("Enter word to be search for: ")
	if key in mean:
		return key,mean[key]
	return key,"Not found"	
def same(mean):
	flipped={}
	for key, value in mean.items():
		if value not in flipped:
			flipped[value]=[key]
		else:
			flipped[value].append(key)
	return flipped
def delete(mean):
	key=input("Enter word to be deleted: ")
	del mean[key]
	return mean
def display(mean):
	m=sorted(mean)
	return m
mean={}
while True:
	print("\n1. Add an entry\n2. Search\n3. Same Meaning\n4. Remove an entry\n5. Display\n6. Exit\n")
	ch=int(input("Enter choice: "))
	if ch==1:
		mean=add(mean)
		print(mean)
	elif ch==2:
		key,value=search(mean)
		print(key+": "+str(value))
	elif ch==3:
		print(same(mean))
	elif ch==4:
		mean=remove(mean)
		print(mean)
	elif ch==5:
		print(display(mean))
	elif ch==6:
		print("Operation Complete\n")
		break
	else:
		print("Invalid entry\n")
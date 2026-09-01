class student():
	counts=0
	countp=0
	def __init__(self,usn,name,subject):
		self.usn=usn
		self.name=name
		self.subject=subject
		self.__class__.counts+=1
		if self.subject.lower()=="python":
			self.__class__.countp+=1
	def display(self):
		if self.subject.lower()=="python":
			print("USN: "+self.usn+"\tName: "+self.name)
a=[]
while True:
	print("1. Enter student details\n2. Display student details\n3. Stop\n")
	ch=int(input("Enter choice: "))
	if ch==1:
		usn=input("Enter student USN: ")
		name=input("Enter student Name: ")
		subject=input("Enter subject registered: ")
		a.append(student(usn,name,subject))
	elif ch==2:
		if a==[]:
			print("No entries yet")
		else:
			print("Students who have taken python:\n")
			for obj in a:
				obj.display()
			print("\nCurrent count of students: "+str(obj.__class__.counts))
			print("Current count of students taking python: "+str(obj.__class__.countp)+"\n")
	elif ch==3:
		print("Operation Complete\n")
		break
	else:
		print("Invalid Option\n")

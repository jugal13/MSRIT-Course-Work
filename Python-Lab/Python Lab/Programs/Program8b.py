class QueueFull(Exception):
	def __init__(self):
		pass
class QueueEmpty(Exception):
	def __init__(self):
		pass
class MyQueue():
	def __init__(self,q,size):
		self.q=q
		self.size=size
	def INSERT(self,ele):
		if len(self.q)==self.size:
			raise QueueFull
		self.q.append(ele)
	def DELETE(self):
		if self.q==[]:
			raise QueueEmpty
		self.q.pop(0)
	def DISPLAY(self):
		if self.q==[]:
			raise QueueEmpty
		for i in self.q:
			print(i,end=" ")
while True:
	print("1. Create queue\n.2 Insert\n3. Delete\n4. Display\n5.Exit\n")
	ch=int(input("Enter choice: "))
	try:
		if ch==1:
			a=[]
			size=int(input("Enter max size of queue: "))
			queue=MyQueue(a,size)
		elif ch==2:
			ele=int(input("Enter element to be inserted: "))
			queue.INSERT(ele)
		elif ch==3:
			queue.DELETE()
		elif ch==4:
			queue.DISPLAY()
		elif ch==5:
			print("Operation Complete\n")
			break
		else:
			print("Invalid Entry\n")
	except QueueFull:
		print("\nQueue if full\n")
	except QueueEmpty:
		print("\nQueue is empty\n")
from Sample import stack
while True:
	print("\n1. Create Stack\n2. Check if empty\n3. Return top\n4. Push\n5. Pop\n6. Display\n7. Exit\n")
	ch=int(input("Enter choice: "))
	if ch==1:
		s=stack.Getstack()
	elif ch==2:
		print(stack.Isempty(s))
	elif ch==3:
		print(stack.Top(s))
	elif ch==4:
		ele=int(input("Enter number to push into stack: "))
		s=stack.Push(s,ele)
	elif ch==5:
		s=stack.Pop(s)
	elif ch==6:
		stack.Display(s)
	elif ch==7:
		print("Operation Complete\n")
		break
	else:
		print("Invalid choice\n")
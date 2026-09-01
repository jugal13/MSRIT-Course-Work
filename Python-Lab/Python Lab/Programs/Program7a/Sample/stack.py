def Getstack():
	return []
def Isempty(s):
	if s==[]:
		return True
	return False
def Top(s):
	if s:
		index=len(s)-1
		return index
	return -1
def Push(s,ele):
	s.append(ele)
	return s
def Pop(s):
	s.pop()
	return s
def Display(s):
	a=s[::-1]
	for i in a:
		print(i)
	return
from Mystring import Palindrome
from Mystring import CountVowel
while True:
	print("1. Input String\n2. Check if Palindrome\n3.Vowel Count in string\n4.Exit\n")
	ch=int(input("Enter choice: "))
	if ch==1:
		string=input("Enter the string\n")
	elif ch==2:
		print(Palindrome.plaindrome(string))
	elif ch==3:
		CountVowel.vowelCount(string)
	elif ch==4:
		print("Operation Complete\n")
		break
	else:
		print("Invalid Option\n")
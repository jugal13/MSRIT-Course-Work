s = input("Enter string: ")
s = s[0] + s[1:].replace(s[0],"$")
print(s)
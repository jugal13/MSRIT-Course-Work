def _abecedarian(word):
	test=list(word)
	test.sort()
	test ="".join(test)
	if test==word:
		return True
	return False
word=input("Enter a word: ")
print(_abecedarian(word))
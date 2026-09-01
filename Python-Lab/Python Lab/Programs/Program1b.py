def stats(filename):
	num_lines=0
	num_words=0
	num_chars=0
	with open(filename,'r') as file:
		for line in file:
			num_lines+=1
			line_words=line.split()
			num_words+=len(line_words)
			num_chars+=len(line)
	print("Line count: "+str(num_lines))
	print("Word count: "+str(num_words))
	print("Character count: "+str(num_chars))
	return
stats("Sample.txt")
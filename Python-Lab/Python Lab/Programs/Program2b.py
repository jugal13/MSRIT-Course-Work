def censor(filename):
	final=[]
	with open(filename,'r') as fin:
		for line in fin:
			text=line.split()
			for word in text:
				if len(word)==4:
					i=text.index(word)
					text[i]=word.replace(word,"xxxx")
			final.append(" ".join(text))
	with open("censored.txt",'w') as fout:
		for line in final:
			fout.write(line+'\n')
censor("Input.txt")
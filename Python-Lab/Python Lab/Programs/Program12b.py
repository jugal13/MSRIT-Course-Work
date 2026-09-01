def partition(players):
	final=[]
	for i in players:
		if 'A'<=i[0]<='M':
			final.append(i)
	return final
players=input("Enter list of players\n").split()
print(partition(players))
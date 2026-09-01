men = { 
	'm1' : [ 'w1', 'w2', 'w3' ],
	'm2' : [ 'w2', 'w3', 'w1' ],
	'm3' : [ 'w3', 'w2', 'w1' ]
} 
women = { 
	'w1' : [ 'm1', 'm2', 'm3' ],
	'w2' : [ 'm2', 'm3', 'm1' ],
	'w3' : [ 'm3', 'm2', 'm1' ] 
}
freemen = [ 'm1', 'm2', 'm3' ]
takenwomen = []
final = {}

def GS():
	while freemen:
		for m in freemen:
			listofw = men[m]
			for w in listofw:
				if w not in takenwomen:
					final[w] = m
					freemen.remove(m)
					takenwomen.append(w)
					break
				else:
					listofm = women[w]
					r = final[w]
					if listofm.index(m) < listofm.index(r):
						final[w] = m
						freemen.remove(m)
						freemen.append(r)
						takenwomen.append(w)
						break
	return final

print ("Prefernce List: ")
print ("Men: ")
for i in men:
	print(str(i)+": "+str(men[i]))
print ("Women: ")
for i in women:
	print(str(i)+": "+str(women[i]))
print ("Stable Matching: ")
print(GS())

#Time Complexity is O(n^2)
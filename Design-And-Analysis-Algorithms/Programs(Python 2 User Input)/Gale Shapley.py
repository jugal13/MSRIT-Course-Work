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

men = {}
women = {}
freemen = []
takenwomen = []
final = {}
n = int(raw_input("Enter number of men/women: "))
for i in range(n):
	man = raw_input("Enter man name: ")
	womenlist = list(raw_input("Enter prefernce for %s: " % man).split(" "))
	men.update({man:womenlist})
	freemen.append(man)
for i in range(n):
	woman = raw_input("Enter woman name: ")
	manlist = list(raw_input("Enter prefernce for %s: " % woman).split(" "))
	men.update({woman:manlist})
print "Prefernce List: "
print "Men: "
for i in men:
	print str(i),": ",str(men[i])
print "Women: "
for i in women:
	print str(i),": ",str(women[i])
print "Stable Matching: "
print GS()
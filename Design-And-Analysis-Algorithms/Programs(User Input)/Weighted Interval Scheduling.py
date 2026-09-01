intervals = []
n = int(input("Enter the number of intervals: "))
for i in range(n):
	u = int(input("Enter start time: "))
	v = int(input("Enter end time: "))
	w = int(input("Enter interval weight: "))
	intervals.append([u,v,w])
intervals.sort(key=lambda x:x[1])
p = [0]*(len(intervals)+1)
M = [-1]*(len(intervals)+1)
M[0] = 0

def predecessor():
	for i in range(len(intervals)-1,-1,-1):
		start_time = intervals[i][0]
		for j in range(i-1,-1,-1):
			end_time = intervals[j][1]
			if end_time <= start_time:
				p[i+1] = j+1
				break

def OPT():
	for i in range(1,len(intervals)+1):
		vi = intervals[i-1][2]
		M[i] = max(vi+M[p[i]],M[i-1])

def solution():
	final_set = []
	profit = 0
	j = len(intervals)
	while j != 0:
		if intervals[j-1][2]+M[p[j]] > M[j-1]:
			final_set.append(j)
			profit += intervals[j-1][2]
			j = p[j]
		else:
			j -= 1
	return profit,final_set

predecessor()
OPT()
profit,final_set=solution()
print (profit)
print (final_set)
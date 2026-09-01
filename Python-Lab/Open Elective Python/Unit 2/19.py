def count_values(d):
  l = [i for i in d.keys() if d[i] == 1]
  return len(l)

d = { 'red': 1, 'blue': 1, 'black': 2}
print(count_values(d))
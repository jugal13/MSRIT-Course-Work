def dict_intersect(d1,d2):
  l1 = set(d1.keys())
  l2 = set(d2.keys())
  common = list(l1 & l2)
  final = {}
  for i in common:
    if d1[i] == d2[i]:
      final[i] = d1[i]
  return final

d1 = {
  1:1,
  2:2,
  3:3,
  4:4
}
d2 = {
  3:3,
  4:4,
  2:1,
  1:2
}
print(dict_intersect(d1,d2))
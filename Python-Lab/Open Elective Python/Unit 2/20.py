def gen():
  d = {}
  for i in range(1,21):
    d.update({i:i**2})
  print(d.keys())
  return d

d = gen()
print(d)
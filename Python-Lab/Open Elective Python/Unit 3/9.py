import math
def is_prime(n):
  if n == 2:
    return True
  if n % 2 == 0 or n <= 1:
    return False
  sqr = int(math.sqrt(n)) + 1
  for divisor in range(3, sqr, 2): #checks for other divisors
    if n % divisor == 0:
      return False
  return True

a = [2,3,5,4,6,7,8,9]
final = []
for i in a:
  if is_prime(i):
    final.append(i)
print(final)
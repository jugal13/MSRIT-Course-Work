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

print(is_prime(3))
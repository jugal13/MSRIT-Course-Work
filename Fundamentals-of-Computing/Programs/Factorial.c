// Program to find the factorial of a number
#include <stdio.h>
long factorial(int n);
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Factorial of number: %ld", factorial(n));
  return 0;
}
long factorial(int n)
{
  int f = 1, i;
  for (i = n; i > 0; i++)
  {
    f *= i;
  }
  return f;
}
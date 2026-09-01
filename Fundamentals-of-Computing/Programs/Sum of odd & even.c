// Program to find sum of odd and even position elements in an array
#include <stdio.h>
int main()
{
  int i, A[100], n, odd = 0, even = 0;
  printf("Enter the number of array elements: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }
  for (i = 0; i < n; i++)
  {
    if (i % 2 == 1)
    {
      odd += A[i];
    }
    else
    {
      even += A[i];
    }
  }
  printf("Sum of Odd: %d \t Even: %d", odd, even);
  return 0;
}
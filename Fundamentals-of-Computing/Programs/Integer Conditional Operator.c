// Program to check if integer is positive negative or zero
#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  (n > 0) ? printf("Positive") : (n < 0) ? printf("Negative") : printf("Zero");
  return 0;
}
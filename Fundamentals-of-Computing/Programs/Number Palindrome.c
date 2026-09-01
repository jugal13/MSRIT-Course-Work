// Program to check if number is palindrome
#include <stdio.h>
int main()
{
  int n, rev = 0, num;
  printf("Enter a number: ");
  scanf("%d", &n);
  num = n;
  while (num != 0)
  {
    rev = rev * 10 + num % 10;
    num /= 10;
  }
  if (n == rev)
  {
    printf("Number is palindrome\n");
  }
  else
  {
    printf("Number is not plaindrome\n");
  }
  return 0;
}
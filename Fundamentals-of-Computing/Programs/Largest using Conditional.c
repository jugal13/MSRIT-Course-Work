// Program to calculate the largest of 3 numbers
#include <stdio.h>
int main()
{
  int a, b, c, l;
  printf("Enter 3 numbers: ");
  scanf("%d%d%d", &a, &b, &c);
  l = (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
  printf("Largest: %d\n", l);
  return 0;
}
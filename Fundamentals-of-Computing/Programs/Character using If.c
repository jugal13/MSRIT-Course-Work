// Program to check which charater has been inputted
#include <stdio.h>
#include <ctype.h>
int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  if (isdigit(ch))
  {
    printf("Digit\n");
  }
  if (isalpha(ch))
  {
    printf("Alphabet\n");
  }
  if (isspace(ch))
  {
    printf("Whitespace\n");
  }
  if (ispunct(ch))
  {
    printf("Punctuation\n");
  }
  return 0;
}
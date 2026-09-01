// Program to demonstarte string functions
#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100], str2[100], str3[100];
  char *p;
  printf("Enter two strings:\n");
  scanf("%s %s", str1, str2);
  printf("String Comparision:\n");
  if (!strcmp(str1, str2))
  {
    printf("Strings are same\n");
  }
  else
  {
    printf("Strings are not same\n");
  }
  printf("String Copy");
  printf("String Concat:\n");
  strcpy(str3, str1);
  concat(str3, str2);
  printf("Concatenated Strings is: %s", str3);
  p = strstr(str1, str2);
  if (p)
  {
    printf("First occurrence of string '%s' in '%s' is '%s'", str2, str1, p);
  }
  else
  {
    printf("String not found\n");
  }
  return 0;
}
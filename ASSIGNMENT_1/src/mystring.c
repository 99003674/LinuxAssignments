#include "mystring.h"
#include <string.h>
char mystrcpy(char cpy,char orig)  
{
  printf("Before copying\n");
  printf("Original string: %s \n", orig);
  printf("Duplicate string: %s \n", cpy);
  
  strcpy(cpy, orig);
  
  printf("Source string: %s \n", orig);
  printf("Destination string: %s \n", cpy);

  return 0;
}

int mystrlen(char strng)
{
    int len;
    len = strlen(strng);

    printf("Length of the string = %d\n", len);

    return 0;
}
int strcmp(char str1,char str2)
{
    int res;
    res=strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", res);
    return 0;
}
char mystrcat(char a[],char b[])
{
    strcat(a,b);
    return a;
}

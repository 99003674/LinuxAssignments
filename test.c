#include <stdio.h>
#include "mystring.h"
#include "utils.h"

int main() {
  
  printf("%d",factorial(5));
  printf("%d", isPrime(4));
  printf("%d", ispalindrome(1001));
  printf("%d", mystrlen("Hello"));
  printf("%d", mystrcpy("Hello"));
  printf("%d", mystrcmp("Hello","World"));
  printf("%d", mystrcat("Hello"."World"));

  return 0;
}
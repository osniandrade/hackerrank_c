// https://www.hackerrank.com/challenges/playing-with-characters/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  char  ch;
  char  s[99];
  char  sen[99];

  scanf("%c\n", &ch);
  scanf("%[^\n]%*c", s);
  scanf("%[^\n]%*c", sen);
  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s", sen);
  return 0;
}

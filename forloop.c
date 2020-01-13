// https://www.hackerrank.com/challenges/for-loop-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ft_printnum(int a)
{
    if (a == 0) printf("zero");
    if (a == 1) printf("one");
    if (a == 2) printf("two");
    if (a == 3) printf("three");
    if (a == 4) printf("four");
    if (a == 5) printf("five");
    if (a == 6) printf("six");
    if (a == 7) printf("seven");
    if (a == 8) printf("eight");
    if (a == 9) printf("nine");
}

void ft_iseven(int a)
{
    if (a % 2 == 0) printf("even");
    else printf("odd");
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	for (int i = a; i <= b; i++)
      {
          if (i <= 9) ft_printnum(i);
          if (i > 9) ft_iseven(i);
          printf("\n");
      }

    return 0;
}


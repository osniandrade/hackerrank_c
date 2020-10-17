// https://www.hackerrank.com/challenges/printing-pattern-2/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printc(int n, int cx, int cy)
{
    int max = (n * 2) - 1;

    if (cy == 0 || cy == (max - 1))
        printf("%d", n);
    else
        if (cx == 0 || cx == (max - 1))
            printf("%d", n);
        else
            printf("%d", abs(n - cx));
    if (cy == (max - 1))
        printf("\n");
    else
        printf("_");
}

int main()
{
    int n = 7;
    // scanf("%d", &n);
    int cx = 0;
    int cy = 0;
    int max = (n * 2) - 1;

    while (cx < max)
    {
        while (cy < max)
        {
            printc(n, cx, cy);
            cy++;
        }
        cy = 0;
        cx++;
    }
  	
    return (0);
}
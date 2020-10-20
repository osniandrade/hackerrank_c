// https://www.hackerrank.com/challenges/printing-pattern-2/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void prtspc(int cy, int max)
{
    if (cy == (max - 1))
        printf("\n");
    else
        printf("_");
}

void prtmid(int n, int cx, int cy, int max)
{
    //printf("%d", abs(n - cx));
    if ((cx == (n-cx) || cy == (n-cy)) || (cx == (n-cx+max) || cy == (n-cy+max)))
        printf("X");
    else
        printf("O");
    prtspc(cy, max);
}

// working on getting the rim the coordinate is on
void prtrim(int n, int cx, int cy, int max)
{
    printf("%d", n);
    prtspc(cy, max);
}

int getrim(int n, int cx, int cy, int max)
{
    if ((cx == 0) || (cy == 0) || (cx == max) || cy == max)
        return(n);
    
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
            if ((cy == 0 || cy == (max - 1)) || (cx == 0 || cx == (max - 1)))
                prtrim(n, cx, cy, max);
            else
                prtmid(n, cx, cy, max);
            cy++;
        }
        cy = 0;
        cx++;
    }
  	
    return (0);
}
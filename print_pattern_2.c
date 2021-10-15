// https://www.hackerrank.com/challenges/printing-pattern-2/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void    ft_printborder(int n)
{
    printf("%d ", n);
}

void    ft_printnum(int col_lin, int n, int x, int y)
{
    int mid = (col_lin - 1) / 2;
    int op = 0;
    if (x == 0 || x == col_lin - 1 || y == 0 || y == col_lin - 1)
        ft_printborder(n);
    else
        if (x == mid && y == mid)
            printf("%d ", 1);
        else
        {
            op = (x > y) ? x - y : y - x;
            printf("%d ", op);
        }
}

int main() 
{

    int n;
    int x = 0;
    int y = 0;
    int col_lin = 0;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    col_lin = n + (n - 1);
    while (x < col_lin)
    {
        while (y < col_lin)
        {
            ft_printnum(col_lin, n, x, y);
            y++;
        }
        printf("\n");
        y = 0;
        x++;
    }
    return 0;
}
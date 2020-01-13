// https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ft_sumdig(int n) {
    int result = 0;

    while (n >= 10)
    {
        result += (n % 10);
        n = n / 10;
    }
    result += n;
    printf("%d", result);
}

int main() {
    int n;

    scanf("%d", &n);
    ft_sumdig(n);
    return (0);
}

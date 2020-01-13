// https://www.hackerrank.com/challenges/sum-numbers-c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i1 = 0;
    int i2 = 0;
    float f1 = 0;
    float f2 = 0;

    scanf("%d %d", &i1, &i2);
    scanf("%f %f", &f1, &f2);
    printf("%d ", (i1 + i2));
    printf("%d\n", (i1 - i2));
    printf("%.1f ", (f1 + f2));
    printf("%.1f\n", (f1 - f2));

    return 0;
}
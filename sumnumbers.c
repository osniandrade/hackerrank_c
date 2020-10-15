// https://www.hackerrank.com/challenges/sum-numbers-c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a = 0;
    int b = 0;
    float c = 0;
    float d = 0;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f\n", c + d, c - d);

    return (0);
}
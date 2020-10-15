// https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{
	int d1 = 1;
	int d2 = 1;
	int r_and = 0;
	int r_or = 0;
	int r_xor = 0;

	while (d1 <= n)
	{
		d2 = d1 + 1;
		while (d2 <= n)
		{
			r_and = (((d1 & d2) >= r_and) && ((d1 & d2) < k)) ? (d1 & d2) : r_and;
			r_or = (((d1 | d2) >= r_or) && ((d1 | d2) < k)) ? (d1 | d2) : r_or;
			r_xor = (((d1 ^ d2) >= r_xor) && ((d1 ^ d2) < k)) ? (d1 ^ d2) : r_xor;
			d2++;
		}
		d1++;
	}
	printf("%d\n", r_and);
	printf("%d\n", r_or);
	printf("%d\n", r_xor);
}

int main()
{
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	return 0;
}

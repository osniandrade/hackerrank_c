// https://www.hackerrank.com/challenges/playing-with-characters/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char ch;
	char s[99];
	char sen[99];

	scanf("%c\n", &ch);
	scanf("%s", s);
	scanf("\n");  // used so next scanf don't read previous scanf \n
	scanf("%[^\n]%*c", sen);

	printf("%c\n", ch);
	printf("%s\n", s);
	printf("%s", sen);

	return 0;
}

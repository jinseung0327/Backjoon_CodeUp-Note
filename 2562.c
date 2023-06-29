#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 9, c, d = 0, e;
	for (int b = 1; b <= a; b++)
	{
		scanf("%d", &c);
		if (c > d) {
			d = c;
			e = b;
		}
	}
	printf("%d\n%d", d, e);
}
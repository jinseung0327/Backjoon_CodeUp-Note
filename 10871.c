#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, d;
	scanf("%d %d", &a, &b);
	for (int c = 1; c <= a; c++)
	{
		scanf("%d", &d);
		if (d < b)printf("%d ", d);
	}
	return 0;
}
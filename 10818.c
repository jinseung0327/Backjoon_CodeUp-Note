#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c, n;
	int i;
	scanf("%d", &n);
	int a = 1000000;
	int b = -1000000;
	for (c = 0; c < n; c++)
	{
		scanf("%d", &i);
		if (i < a)a = i;
		if (i > b)b = i;
	}

	printf("%d %d\n", a, b);
	return 0;
}
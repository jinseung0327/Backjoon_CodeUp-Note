#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[31] = { 0, };
	int a, b;
	for (a = 1; a < 29; a++)
	{
		scanf("%d", &b);
		arr[b] = b;
	}

	for (a = 1; a < 31; a++)
	{
		if (arr[a] == 0)printf("%d\n", a);
	}

	return 0;
}
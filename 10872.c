#include <stdio.h>

int main()
{
	int a = 1, b;
	scanf("%d", &b);
	for (int i = 1; i <= b; i++)
	{
		a = a * i;
	}

	printf("%d", a);

	return 0;
}
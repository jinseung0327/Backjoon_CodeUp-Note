#include <stdio.h>

int main()
{
	int a, c, d = 1, result = 0;
	int arr[100] = { 0, };
	scanf("%d", &a);

	for (int b = 1; b <= a; b++)
	{
		scanf("%d", &arr[b]);
	}

	scanf("%d", &c);
	for (int b = 1; b <= a; b++)
	{
		if (arr[b] == c)
		{
			result = d;
			++d;
		}
	}
	printf("%d", result);

	return 0;
}
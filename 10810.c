#include <stdio.h>

int main()
{
	int a, b;
	int c, d, e;
	scanf("%d %d", &a, &b);
	int arr[101] = { 0, };
	for (int i = 1; i <= b; i++)
	{
		scanf("%d %d %d", &c, &d, &e);
		for (int i = c; i <= d; i++)
		{
			arr[i] = e;
		}
	}
	for (int j = 1; j <= a; j++)
	{
		printf("%d ", arr[j]);
	}

	return 0;
}
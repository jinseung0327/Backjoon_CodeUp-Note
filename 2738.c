#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[101][101] = { 0, };
	int b[101][101] = { 0, };
	int n, m, sum = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum = a[i][j] + b[i][j];
			printf("%d ", sum);
		}
		printf("\n");
	}


}
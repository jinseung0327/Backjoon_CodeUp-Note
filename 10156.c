#include <stdio.h>

int main()
{
	int k, n, m, sum = 0, result = 0;
	scanf("%d %d %d", &k, &n, &m);
	sum = k * n;
	result = sum - m;
	if (result < 0)result = 0;
	printf("%d", result);
}
#include <stdio.h>

int main()
{
	int n, k, cnt = 0, i;
	scanf("%d %d", &n, &k);

	for (i = 0; i < n; i++)
	{
		if (n % (i + 1) == 0)
		{
			cnt++;
		}
		if (cnt == k)break;
	}
	if (i + 1 <= n)printf("%d", i + 1);
	else printf("0");
}
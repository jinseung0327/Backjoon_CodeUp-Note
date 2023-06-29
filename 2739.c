#include <stdio.h>

int main()
{
	int n, a;
	scanf("%d", &n);
	for (a = 1; a <= 9; a++) {
		printf("%d * %d = %d\n", n, a, n * a);
	}
	return 0;
}
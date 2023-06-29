#include <stdio.h>
#include <stdlib.h>


int main()
{
	long long int a, b, result = 0;
	scanf("%lld %lld", &a, &b);
	result = llabs(a - b);
	printf("%lld", result);

	return 0;
}
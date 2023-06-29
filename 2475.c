#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int arr[6] = { 0, }, result = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		result = result + pow(arr[i], 2.0);
	}

	int sum = result % 10;

	printf("%d", sum);

	return 0;
}
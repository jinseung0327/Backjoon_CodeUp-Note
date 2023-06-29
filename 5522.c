#include <stdio.h>

int main()
{
	int arr[5] = { 0, }, result = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		result = result + arr[i];
	}
	printf("%d", result);

	return 0;
}
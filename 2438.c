#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N); // 5


	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
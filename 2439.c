#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a); // 5
	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= a - i - 2; j++) // 4
			printf(" ");
		for (int k = 0; k <= i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}

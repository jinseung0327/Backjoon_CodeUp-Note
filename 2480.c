#include <stdio.h>

int main() {
	int a, b, c, n = 0, max = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && a == c && b == c) {
		n = 10000 + a * 1000;
	}
	else if (a == b || a == c) {
		n = 1000 + a * 100;
	}
	else if (b == c) {
		n = 1000 + b * 100;
	}
	else {
		if (a > b && a > c) {
			max = a;
		}
		else if (b > a && b > c) {
			max = b;
		}
		else if (c > a && c > b) {
			max = c;
		}
		n = max * 100;
	}

	printf("%d", n);

	return 0;
}
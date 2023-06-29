#include <stdio.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m); //10 59

	m -= 45; // 14
	if (m < 0) {
		m += 60; //74
		h -= 1; //9


		if (h < 0) h = 23;
	}

	printf("%d %d", h, m);

	return 0;
}
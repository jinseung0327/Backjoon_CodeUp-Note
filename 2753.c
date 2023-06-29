#include <stdio.h>

int main()
{
	int year;

	while (1)
	{
		scanf("%d", &year);


		if (year >= 1 && year <= 4000) {
			if (year % 4 == 0) {
				if (year % 100 != 0 || year % 400 == 0) {
					printf("1");
					break;
				}
				else {
					printf("0");
					break;
				}
			}
			else {
				printf("0");
				break;
			}
		}
	}
	return 0;
}
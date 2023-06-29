#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
	char string[100] = "";
	scanf("%s", string);
	int len = strlen(string);
	printf("%d", len);

	return 0;
}
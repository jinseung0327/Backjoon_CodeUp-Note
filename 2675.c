#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int a, b;
	char name[21] = "";
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d %s", &b, name);
		for (int j = 0; j < strlen(name); j++)
		{
			for (int k = 0; k < b; k++)printf("%c", name[j]);
		}
		printf("\n");
	}

	return 0;
}
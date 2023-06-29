#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int a, result = 0, p, sum;
	char s[80] = "";

	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		sum = 0;
		p = 1;
		scanf("%s", s);
		result = strlen(s);
		for (int j = 0; j < result; j++)
		{
			if (s[j] == 'O')
			{
				sum += p;
				p++;
			}
			if (s[j] == 'X')p = 1;

		}
		printf("%d\n", sum);
	}
}
#include <stdio.h>

int main()
{
	int score[5] = { 0, };
	int result = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
		if (score[i] < 40)
		{
			score[i] = 40;
		}
		result = result + score[i];
	}

	printf("%d", result / 5);

	return 0;
}
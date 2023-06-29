#include <stdio.h>

int main()
{
    int a, b = 5, c, d = 0;
    scanf("%d", &a);
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &c);
        if (a == c)d++;
    }
    printf("%d", d);

    return 0;
}
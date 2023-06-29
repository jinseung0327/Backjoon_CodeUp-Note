#include <stdio.h>

int main()
{
    int a, b, result;
    scanf("%d", &a);
    result = 0;
    for (b = 1; b <= a; b++) {
        result = result + b;
    }
    printf("%d", result);

    return 0;
}
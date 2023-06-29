#include <stdio.h>

int main() {

    int n, v, c, e;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &v, &e);

        c = 2 - v + e;

        printf("%d\n", c);
    }
    return 0;
}
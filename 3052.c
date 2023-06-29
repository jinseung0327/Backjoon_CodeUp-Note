#include <stdio.h>

int main() {
    int a, sum = 0;
    int n[11] = { 0 };
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &a);
        n[i] = (a % 42);
    }
    for (int i = 1; i <= 10; i++) {
        int count = 1;
        for (int j = i + 1; j <= 10; j++) {
            if (n[i] == n[j]) count++; //서로 같을경우
        }
        if (count == 1) sum++; // 나머지가 다 다른경우
    }
    printf("%d", sum); //다른나머지 출력
    return 0;
}
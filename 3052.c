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
            if (n[i] == n[j]) count++; //���� �������
        }
        if (count == 1) sum++; // �������� �� �ٸ����
    }
    printf("%d", sum); //�ٸ������� ���
    return 0;
}
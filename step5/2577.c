#include <stdio.h>

int main(void)
{
    int A, B, C, num, cnt[10] = { 0 };
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    num = A * B * C;
    while (num / 10 != 0) {
        cnt[num % 10]++;
        num /= 10;
    }
    cnt[num]++;
    for (int i = 0; i < 10; i++) {
        printf("%d\n", cnt[i]);
    }
    return 0;
}
#include <stdio.h>
#define N 9

int main(void)
{
    int num[N], max = 0, order = 1;
    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
        if (num[i] > max) {
            max = num[i];
            order = i + 1;
        }
    }
    printf("%d\n%d\n", max, order);
    return 0;
}
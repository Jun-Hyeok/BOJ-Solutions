#include <stdio.h>

int main(void)
{
    int N, min, max;
    scanf("%d", &N);
    int num[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }
    min = num[0];
    max = num[0];
    for (int i = 0; i < N; i++) {
        if (num[i] < min)
            min = num[i];
        if (num[i] > max)
            max = num[i];
    }
    printf("%d %d\n", min, max);
    return 0;
}
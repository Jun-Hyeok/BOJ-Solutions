#include <stdio.h>

int main(void)
{
    int N, Ntemp, cnt = 0;
    scanf("%d", &N);

    Ntemp = N;

    while (1) {
        cnt++;
        N = N % 10 * 10 + (N / 10 + N % 10) % 10;
        if (N == Ntemp)
            break;
    }
    printf("%d\n", cnt);

    return 0;
}
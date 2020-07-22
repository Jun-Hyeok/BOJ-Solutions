#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        printf("%d\n", N - i);
    }
    // while (N--) {
    //     printf("%d\n", N + 1);
    // }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int N, X, A;
    scanf("%d", &N);
    scanf("%d", &X);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A);
        if (A < X)
            printf("%d ", A);
    }
    printf("\n");
    return 0;
}
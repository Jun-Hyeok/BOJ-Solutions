#include <stdio.h>

int main(void)
{
    int T, A, B;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &A);
        scanf("%d", &B);
        printf("%d\n", A + B);
    }
    // for (int i = 0; i < T; i++) {
    //     scanf("%d", &A);
    //     scanf("%d", &B);
    //     printf("%d\n", A + B);
    // }
    return 0;
}

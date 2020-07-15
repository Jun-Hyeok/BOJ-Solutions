#include <stdio.h>

int main(void)
{
    int H, M;
    scanf("%d %d", &H, &M);

    if (M < 45) {
        if (H == 0) {
            H = 24;
        }
        printf("%d %d\n", H - 1, M + 15);
    } else {
        printf("%d %d\n", H, M - 45);
    }

    return 0;
}
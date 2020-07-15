#include <stdio.h>

int main(void)
{
    int H, M;
    scanf("%d", &H);
    scanf("%d", &M);
    if (M < 45) {
        if (H == 0)
            H = 24;
        printf("%d %d", H - 1, M + 15);
    } else {
        printf("%d %d", H, M - 45);
    }
    return 0;
}
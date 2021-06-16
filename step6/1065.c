#include <stdio.h>

int ishansu(int X)
{
    if (X / 100) {
        if (X / 100 + X % 10 == 2 * (X % 100 / 10))
            return 1;
        else
            return 0;
    } else {
        return 1;
    }
}
int main(void)
{
    int N, cnt = 0;
    scanf("%d", &N);
    for (int x = 1; x < N + 1; x++) {
        cnt = cnt + ishansu(x);
    }
    printf("%d", cnt);
    return 0;
}
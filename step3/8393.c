#include <stdio.h>

int main(void)
{
    int n, res = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        res += i + 1;
    }
    printf("%d\n", res);
}
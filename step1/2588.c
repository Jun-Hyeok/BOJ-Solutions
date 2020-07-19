#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    printf("%d\n", m % 10 * n);
    printf("%d\n", m % 100 / 10 * n);
    printf("%d\n", m / 100 * n);
    printf("%d\n", m * n);
    return 0;
}
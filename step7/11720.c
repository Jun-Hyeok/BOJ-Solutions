#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, sum = 0;
    char num;
    scanf("%d", &N);
    getchar();
    while (N--) {
        scanf("%c", &num);
        sum = sum + (int)(num - '0');
    }
    printf("%d", sum);
    return 0;
}
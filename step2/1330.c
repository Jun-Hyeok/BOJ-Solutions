#include <stdio.h>

int main(void)
{
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    if (A > B)
        printf(">");
    else if (A < B)
        printf("<");
    else
        printf("==");
    return 0;
}
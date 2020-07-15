#include <stdio.h>

int main(void)
{
    int yr;
    scanf("%d", &yr);
    // printf("%d", (yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0);
    if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0)
        printf("%d", 1);
    else
        printf("%d", 0);
    return 0;
}
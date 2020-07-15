#include <stdio.h>

int main(void)
{
    int score;
    scanf("%d", &score);
    if (89 < score && score < 101)
        printf("A");
    else if (79 < score && score < 90)
        printf("B");
    else if (69 < score && score < 80)
        printf("C");
    else if (59 < score && score < 70)
        printf("D");
    else
        printf("F");
    return 0;
}
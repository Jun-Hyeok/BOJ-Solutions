#include <stdio.h>
#include <string.h>

int main(void)
{
    char res[80];
    int T, score = 0, total = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%s", res);
        score = 0, total = 0;
        for (int j = 0; j < strlen(res); j++) {
            if (res[j] == 'X')
                score = 0;
            else
                score++;
            total += score;
        }
        printf("%d\n", total);
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int N, M = 0;
    scanf("%d", &N);
    int score[N];
    float sum = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
        if (score[i] > M)
            M = score[i];
    }
    for (int i = 0; i < N; i++) {
        sum += (float)score[i] / M * 100;
    }
    printf("%f\n", sum / N);
    return 0;
}
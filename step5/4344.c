#include <stdio.h>

int main(void)
{
    int C, N;
    scanf("%d", &C);
    for (int i = 0; i < C; i++) {
        scanf("%d", &N);
        int score[N], sum = 0, cnt = 0;
        for (int j = 0; j < N; j++) {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        for (int j = 0; j < N; j++) {
            if (score[j] > (float)sum / N)
                cnt++;
        }
        printf("%.3f%%\n", (float)cnt / N * 100);
    }
    return 0;
}
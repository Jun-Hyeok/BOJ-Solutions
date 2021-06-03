#include <stdio.h>
#define N 10
#define DIV 42

int main(void)
{
    int num[N], cnt[DIV] = { 0 }, rems = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
        cnt[num[i] % DIV]++;
    }
    for (int i = 0; i < DIV; i++) {
        if (cnt[i] != 0)
            rems++;
    }
    printf("%d\n", rems);
    return 0;
}
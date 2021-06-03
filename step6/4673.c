#include <stdio.h>

int main(void)
{
    int arr[10000] = {[0 ... 9999] = 1};
    for (int n = 1; n < 10001; n++) {
        if (arr[n-1]) {
            printf("%d\n", n);
        }
        int rem; 
        int sum = n;
        int i = n;
        while (i) {
            rem = i % 10;
            sum += rem;
            i /= 10;
        }
        if (sum < 10001) {
            arr[sum-1] = 0;     
        }
    }
    return 0;
}
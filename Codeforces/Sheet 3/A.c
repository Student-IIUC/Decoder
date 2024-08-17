#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int N;
    scanf("%d", &N);
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("%lld\n", abs(sum));
    return 0;
}
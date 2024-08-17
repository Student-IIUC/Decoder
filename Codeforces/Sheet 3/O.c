#include <stdio.h>
#include <math.h>
int main()
{
    int i, maxidx, minidx, n;
    long long sum;
    scanf("%d", &n);
    long long x = 0, t = 1;
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            sum = 0;
        else if (i == 2)
            sum = 1;
        else
        {
            sum = x + t;
            x = t;
            t = sum;
        }
    }
    printf("%lld", sum);
    return 0;
}
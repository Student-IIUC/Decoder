#include <stdio.h>
#include <math.h>
int main()
{
    int i, maxidx, minidx, x, n, t;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    minidx = 0;
    maxidx = 0;
    for (i = 1; i < n; i++)
    {
        if (a[minidx] > a[i])
            minidx = i;
        else if (a[maxidx] < a[i])
            maxidx = i;
    }
    int temp = a[minidx];
    a[minidx] = a[maxidx];
    a[maxidx] = temp;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
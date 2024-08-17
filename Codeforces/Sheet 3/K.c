#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, count, min, n;
    scanf("%d", &n);
    char a[n];
    scanf("%s", &a);
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i] - '0';
    printf("%d", sum);
    return 0;
}
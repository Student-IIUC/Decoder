#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, count, min, n;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = a[0];
    for (i = 0; i < n; i++)
        if (min > a[i])
            min = a[i];

    count = 0;
    for (i = 0; i < n; i++)
        if (min == a[i])
            count++;
    if (count % 2 != 0)
        printf("Lucky\n");
    else
        printf("Unlucky\n");
    return 0;
}
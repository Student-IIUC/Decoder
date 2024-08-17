#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, count, min, n;
    char a[1000010];
    scanf("%s", &a);
    int sum = 0;
    n = strlen(a);
    for (i = 0; i < n; i++)
        sum += a[i] - '0';
    printf("%d", sum);
    return 0;
}
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j, t, n;
    char a[1000], b[1000];
    scanf("%s", &a);
    scanf("%s", &b);
    printf("%d %d\n%s %s", strlen(a), strlen(b), a, b);
    return 0;
}
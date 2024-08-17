#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j, t, n;
    char a[1000000], b[1000];
    scanf("%[^\n]s", &a);
    i = 0;
    while (a[i] != '\\')
    {
        printf("%c", a[i]);
        i++;
    }
    return 0;
}
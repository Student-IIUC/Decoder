#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, count, min, n, t;
    char a[100010];
    scanf("%s", a);
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] == ',')
            a[i] = ' ';
        else if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 32;
        else
            a[i] += 32;
    }
    printf("%s\n", a);

    return 0;
}
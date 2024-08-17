#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, count, min, n, t;
    char a[110];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", a);
        if (strlen(a) <= 10)
            printf("%s\n", a);
        else
        {
            i = strlen(a) - 1;
            n = i - 1;
            printf("%c%d%c\n", a[0], n, a[i]);
        }
    }
    return 0;
}
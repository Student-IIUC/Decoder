#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, count, min, n = 1, t;
    char a[1010];
    scanf("%[^\n]", a);
    t = strlen(a);
    for (i = 0, j = t - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            n = 0;
            break;
        }
    }
    if (n == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
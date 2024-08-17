#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d", &a);
    long long b[a];
    for (int i = 0; i < a; i++)
        scanf("%lld", &b[i]);
    int c = 0;
    for (int i = 0; i <= a / 2; i++)
    {
        if (b[i] != b[a - i - 1])
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
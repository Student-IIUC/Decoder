#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    long long b[a];
    for (int i = 0; i < a; i++)
        scanf("%lld", &b[i]);
    for (int j = a - 1; j >= 0; j--)
        printf("%lld ", b[j]);
    return 0;
}
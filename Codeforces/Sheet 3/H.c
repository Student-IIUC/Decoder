#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d", &a);
    long long b[a], temp;
    for (int i = 0; i < a; i++)
        scanf("%lld", &b[i]);
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (int i = 0; i < a; i++)
        printf("%lld ", b[i]);
    return 0;
}
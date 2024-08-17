#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    int count = 0;
    while (count < 100)
    {
        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 == 0)
                A[i] /= 2;
            else
            {
                printf("%d", count);
                return 0;
            }
        }
        count++;
    }
    return 0;
}
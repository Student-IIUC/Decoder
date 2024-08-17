#include <stdio.h>
#include <math.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++)
            scanf("%d", &A[i]);

        int count = 0;
        for (int i = 0; i < N; i++)
        {
            count++;
            for (int j = i + 1; j < N; j++)
            {
                if (A[j] >= A[j - 1])
                    count++;
                else
                    break;
            }
        }
        printf("%d\n", count);
    }
}
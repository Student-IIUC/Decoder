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

        int min_sum = A[0] + A[1] + 1;
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int sum = A[i] + A[j] + j - i;
                if (sum < min_sum)
                    min_sum = sum;
            }
        }
        printf("%d\n", min_sum);
    }
    return 0;
}
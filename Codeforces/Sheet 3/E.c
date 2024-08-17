#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);
    int min = A[0];
    int position = 1;
    for (int i = 1; i < N; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            position = i + 1;
        }
    }
    printf("%d %d\n", min, position);
    return 0;
}
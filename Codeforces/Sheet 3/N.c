#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    char S[100];
    scanf("%s", S);
    int c = 0;
    for (int i = 0; i < strlen(S); i++)
        if (S[i] != '-')
            c++;
    if (S[A] == '-' && c == A + B)
        printf("Yes\n");
    else
        printf("No\n");
}
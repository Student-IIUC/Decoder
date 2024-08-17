#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        char S[1000000];
        scanf("%s", S);
        int check = 0;
        for (int i = 0; i < strlen(S) - 2; i++)
        {
            if ((S[i] == '1' && S[i + 1] == '0' && S[i + 2] == '1') || (S[i] == '0' && S[i + 1] == '1' && S[i + 2] == '0'))
            {
                check = 1;
                break;
            }
        }
        if (check == 1)
            printf("Good\n");
        else
            printf("Bad\n");
    }
}
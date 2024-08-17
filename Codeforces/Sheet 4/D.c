#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, j, t, n;
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);
    char c[100];
    strcpy(c, a);
    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s\n", strcat(a, b));
    char temp = c[0];
    c[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", c, b);
    return 0;
}
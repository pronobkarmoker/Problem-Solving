#include <stdio.h>
#include <string.h>

int main()
{

    int a1, a2, a3, a4, sum = 0;
    scanf("%d%d%d%d", &a1, &a2, &a3, &a4);
    char s[1001];
    scanf("%s", &s);

    for (int i = 0; i < strlen(s) ; i++)
    {
        if (s[i] == '1')
            sum = sum + a1;
        else if (s[i] == '2')
            sum += a2;
        else if (s[i] == '3')
            sum += a3;
        else if (s[i] == '4')
            sum += a4;
    }
    printf("%d", sum);

    return 0;
}
#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        printf("%d ", a);
    }
    else
    {
        printf("%d ", b);
    }
    if (a == 0 || b == 0)
    {
        printf("0");
    }
    else
    {
        n = abs(a - b);
        printf("%d", n / 2);
    }
}
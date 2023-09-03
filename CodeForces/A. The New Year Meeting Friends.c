#include <stdio.h>

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int min(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }
    else if (b < a && b < c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int res = max(a, b, c) - min(a, b, c);
    printf("%d", res);
}
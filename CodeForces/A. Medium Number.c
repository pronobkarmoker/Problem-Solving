#include <stdio.h>

int medium(int a, int b, int c)
{
    if (a < b && b < c)
    {
        return b;
    }
    else if (c < b && b < a)
    {
        return b;
    }
    else if (b < a && a < c)
    {
        return a;
    }
    else if (c < a && a < b)
    {
        return a;
    }
    else if (a < c && c < b)
    {
        return c;
    }
    else if (b < c && c < a)
    {
        return c;
    }
}
int main()
{
    int a, b, c, m;
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        m = medium(a, b, c);
        printf("%d\n", m);
    }
}
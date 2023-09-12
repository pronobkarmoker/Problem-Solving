#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, res;
    scanf("%d %d", &a, &b);

    res = pow(a, b);
    int x = -1;
    if (res > (pow(10 , 9)))
    {
        printf("%d", x);
    }
    else
    {
        printf("%d", res);
    }
}
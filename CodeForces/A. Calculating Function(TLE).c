#include <stdio.h>
#include <math.h>

int main()
{
    int f_n = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        f_n = f_n + (pow(-1, i) * i);
    }
    printf("%d", f_n);
    return 0;
}

// TLE but right
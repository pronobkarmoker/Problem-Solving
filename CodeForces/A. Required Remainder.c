#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, n;
        scanf("%d%d%d", &x, &y, &n);
        int ans = (n - y) / x * x + y;
        if (ans > n)
            ans -= x;
        printf("%d\n", ans);
    }
    return 0;
}

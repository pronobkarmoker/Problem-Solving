#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            s = s + x;
        }
        if (s < n)
        {
            printf("1\n");
        }
        else
        {
            printf("%d\n", s - n);
        }
    }
    return 0;
}

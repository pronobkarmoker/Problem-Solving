#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        if (num[j] > 0 && num[j] >= num[t - 1])
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
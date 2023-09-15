#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, right = 0, left = 0, tright = 0, tleft = 0;
    scanf("%d", &n);
    int doors[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &doors[i]);
        if (doors[i] == 1)
        {
            right = right + 1;
        }
        else if (doors[i] == 0)
        {
            left = left + 1;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (doors[i] == 1)
        {
            tright = tright + 1;
            if (tright == right)
            {
                break;
            }
        }
        else if (doors[i] == 0)
        {
            tleft = tleft + 1;
            if (tleft == left)
            {
                break;
            }
        }
    }
    printf("%d", i + 1);
}

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char x[11];
        scanf("%s", x);

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (x[i] > x[j])
                {
                    char temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            }
        }
        if (strcmp(x, "Timru") == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
}
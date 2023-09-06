#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s",s);
    int count = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            count++;
        }
        else if (s[i] == 'D')
        {
            count2++;
        }
    }

    if (count == count2)
    {
        printf("Friendship\n");
    }
    else if (count > count2)
    {
        printf("Anton\n");
    }
    else
    {
        printf("Danik\n");
    }

    return 0;
}
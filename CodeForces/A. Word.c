#include <stdio.h>

int main()
{
    char a[101];
    
    gets(a);
    int count1 = 0, count2 = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            count1++;
        }
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            count2++;
        }
    }

    if (count1 > count2)
    {
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                a[i] = a[i] - 32;
            }
        }
        printf(a);
    }

    else if (count2 >= count1)
    {
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                a[i] = a[i] + 32;
            }
        }
        printf(a);
    }

    return 0;
}
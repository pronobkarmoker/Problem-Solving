#include <stdio.h>
#include <string.h>

int main()
{
    // int i;
    char s1[101];
    gets(s1);
    int length = strlen(s1);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (s1[i] != '\0')
        {

            count++;
        }

        for (int j = i + 1; j < length; j++)
        {
            if ((s1[i] == s1[j]))
            {
                s1[j] = '\0';
            }
        }
    }

    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}

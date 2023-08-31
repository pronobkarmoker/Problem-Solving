#include <stdio.h>
#include <string.h>
int main()
{

    char s[101];
    char temp;
    gets(s);
    int length = strlen(s);

    for (int i = 0; i < length; i = i + 2)
    {
        for (int j = 0; j < length - 1; j = j + 2)
        {
            if (s[j] > s[j + 2])
            {
                temp = s[j];
                s[j] = s[j + 2];
                s[j + 2] = temp;
            }
        }
    }
    printf(s);

    return 0;
}
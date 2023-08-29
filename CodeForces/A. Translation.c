#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char t[100];
    gets(s);
    gets(t);

    strrev(t);
    int check = strcmp(s, t);
    if (check == 0)
        printf("YES");
    else
        printf("NO");
}
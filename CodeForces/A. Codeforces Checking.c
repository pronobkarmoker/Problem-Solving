#include <stdio.h>
int main()
{
    int t;
    char s;
    scanf("%d", &t);
    while (t--)
    {

        scanf(" %c", &s);
        //getchar();
        if (s == 'c' || s == 'o' || s == 'd' || s == 'e' || s == 'f' || s == 'o' || s == 'r' ||s == 'c' || s == 'e' || s == 's')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}

// #include <stdio.h>

// int main()
// {

//     char ch;
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         scanf(" %c", &ch);
//         if (ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'o' || ch == 'r' || ch == 'c' || ch == 'e' || ch == 's')
//         {
//             printf("YES\n");
//         }
//         else
//             printf("NO\n");
//     }
// }
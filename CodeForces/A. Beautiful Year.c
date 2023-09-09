#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    for (;;)
    {
        year++;
        int a = year / 1000;
        int b = (year % 1000) / 100;
        int c = ((year % 1000) % 100) / 10;
        int d = ((year % 1000) % 100) % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            printf("%d", year);
            break;
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{

    int n, sum = 0;
    char string[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", string);
        if (!strcmp(string, "Tetrahedron"))
            sum = sum + 4;
        else if (!strcmp(string, "Cube"))
            sum = sum + 6;
        else if (!strcmp(string, "Octahedron"))
            sum = sum + 8;
        else if (!strcmp(string, "Dodecahedron"))
            sum = sum + 12;
        else if (!strcmp(string, "Icosahedron"))
            sum = sum + 20;
    }
    printf("%d", sum);

    return 0;
}
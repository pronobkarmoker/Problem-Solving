#include <stdio.h>
#include <math.h>

int main()
{
    double n, k;
    scanf("%lf %lf", &n, &k);
    int card = (int)(ceil(2 * n / k) + ceil(5 * n / k) + ceil(8 * n / k));
    printf("%d\n", card);

    return 0;
}
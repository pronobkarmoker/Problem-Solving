// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int res = 1;
//     for (int i = 2; i <= n; i++) {
//         int p = (int)pow(5, i);
        
//         p %= 100; 
        
//         res = (res * p) % 100;
        
//     }

//     printf("%d\n", res);

//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int result = 1;
    int base = 5;
    
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % 100;
        }
        base = (base * base) % 100;
        n /= 2;
    }

    printf("%d\n", result);

    return 0;
}

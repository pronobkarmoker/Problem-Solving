#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int min_b = 1;
        int max_a = a[0]; // Initialize max_a with the first element

        // Find the maximum element in the array
        for (int i = 0; i < n; i++) {
            if (a[i] > max_a) {
                max_a = a[i];
            }
        }


        // If 1 is not present, adjust min_b
        if (max_a != 1) {
            min_b = max_a - 1;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] >= min_b) {
                min_b = a[i] + 1;
            }
        //     else if (a[i] != 1) {
        //     min_b = max_a - 1;
        // }
        }

        printf("%d\n", min_b);

        free(a);
    }

    return 0;
}

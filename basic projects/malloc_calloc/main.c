#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr_m = (int *)malloc(3 * sizeof(int));
    int *arr_c = (int *)calloc(3, sizeof(int));

    printf("malloc initial value: %d\n", arr_m[0]);
    printf("calloc initial value: %d\n", arr_c[0]);

    free(arr_m);
    free(arr_c);
    return 0;
}

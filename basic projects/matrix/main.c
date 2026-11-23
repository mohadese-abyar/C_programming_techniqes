#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p = &matrix[0][0];

    for (int i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>



int main() {
    int rows = 3, cols = 4;


    int **matrix = (int **)malloc(rows * sizeof(int));
    for (int i = 0; i< rows;i++){
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    matrix[1][2] = 99;
    printf("Element matrix[1][2] : %d\n",matrix[1][2]);
    for (int i = 0; i<rows;i++) free(matrix[i]);
    free(matrix);
    
   
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void append(int **arr,int *size, int *capacity, int val){
    if (*size == *capacity){
        *capacity *=2;
        *arr = (int *)realloc(*arr,(*capacity)* sizeof(int));
    }
    (*arr)[(*size)++]=val;
}


int main() {
    int capacity= 2 , size = 0;
    int *arr = (int *)malloc(capacity * sizeof(int));

    append(&arr,&size,&capacity,5);
    append(&arr,&size,&capacity,15);
    append(&arr,&size,&capacity,25);

    printf("Size :%d , Capacity: %d\n", size,capacity);
    free(arr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>



int* createArray(int size, int defaultValue){
    int *arr = (int *) malloc(size * sizeof(int));
    if (arr == NULL) return NULL;
    
    for (int i = 0 ; i< size ; i++) arr[i] = defaultValue;
    return arr;
}


int main() {
    int *my_arr = createArray(5,7);
    for (int i =0 ; i< 5 ;i++) printf("%d ", my_arr[i]);
    free(my_arr);
   
    return 0;
}

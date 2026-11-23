#include <stdio.h>

void findMinMax(int arr[],int size, int *min,int *max){
    *min= arr[0];
    *max = arr[0];
    for (int i =1;i< size; i++){
        if (arr[i]<*min) *min = arr[i];
        if (arr[i]>*max) *max = arr[i];
    }
    
}


int main(){
    int nums[] = {14,2,89,34,5};
    int minVal,maxVal;
    findMinMax(nums,5,&minVal,&maxVal);
    printf("Min : %d, Max :%d\n ",minVal,maxVal);
    return 0;
}



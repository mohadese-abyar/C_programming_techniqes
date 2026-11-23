#include <stdio.h>
#include <stdlib.h>

int* mergeArrays(int *a1, int s1, int *a2, int s2){
    int *res = (int *) malloc((s1+s2)* sizeof(int));
    for(int i = 0; i<s1;i++) res[i] = a1[i];
    for(int i = 0; i<s2;i++) res[s1+i] = a2[i];
    return res;
    
}

int main() {
    int a[] ={1,2} , b[] ={3,4,5};
    int *merged = mergeArrays(a,2,b,3);
    for (int i = 0 ;i<5 ;i++) printf("%d ",merged[i]);
    free(merged);
    return 0;
}

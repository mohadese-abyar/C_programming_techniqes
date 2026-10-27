// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

void reverseArray (int *start,int size){

    // *start points to &arr[0]
     
    int *end = start + size -1;
    // end's Address should be the smallest address in reverse array
    
    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    
        
    }
}

int main() {
   int arr[] = {1,2,3,4,5};
    reverseArray(arr,5);
    for(int i = 0; i<5;i++) printf("%d ",arr[i]);
    return 0;
}

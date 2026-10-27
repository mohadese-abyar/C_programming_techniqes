// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int arr[4] = {10, 20, 30, 40};
    int *p = arr;
    for (int i = 0; i < 4; i++) {
        printf("Element %d: %d (Address: %p)\n", i, *(p + i), (p + i));
    };
    
    int  arr2[] = {5,10,15,20};
    int *p2 = arr2;

    for(int i=0;i<4;i++){
        printf("%d ",*p2);
        p2++;
        
    };
    return 0;
}

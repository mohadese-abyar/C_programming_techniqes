#include <stdio.h>

int main(){
    int x = 20;
    int *ptr = &x;
    printf("Value of x: %d\n",x);
    printf("Address of x: %p\n",&x);
    
    printf("Value of ptr : %p\n",ptr);
    printf("value via ptr: %d\n",*ptr);

    *ptr = 40;
    printf("New value of x:%d\n",x);
    return 0;
}



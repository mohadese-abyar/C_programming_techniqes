#include <stdio.h>

#define PARENT(i) (((i) - 1) >> 1)
#define LEFT(i)  (((i)<< 1)+1)
#define RIGHT(i) (((i)<< 1)+2) 


int main(){

    int i = 2;
    printf("Left child index : %d\n", LEFT(i));
    printf("Right child index : %d\n", RIGHT(i));
    printf("Parent index : %d\n", PARENT(i));
    return 0;  

}
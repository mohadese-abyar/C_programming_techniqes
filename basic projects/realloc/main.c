#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p1= (int *)malloc(3 * sizeof(int));
    p1[0] =10;
    p1[1]=20;
    p1[2]=30;

    int *p2= (int *)realloc(p1, 5 * sizeof(int));

    p2[3]=40;
    *(p2+4) = *(p2+1) +p2[3];

    printf("%d , %d\n",p2[2],p2[4]);



    
    return 0;
}

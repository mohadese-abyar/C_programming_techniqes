#include <stdio.h>

void swapPointers(int **ptr1,int **ptr2){
    int *temp = *ptr1;
    *ptr1=*ptr2;
    *ptr2 = temp;
}



int main() {
    int a = 100;
    int *p = &a;
    int **pp = &p;
    printf("Value of a : %d\n",a);
    printf("Value via *p :%d\n",*p);
    printf("Value via **pp :%d\n",**pp);
    
    int x = 10, y =20;
    int *p1 = &x, *p2=&y;
    swapPointers(&p1,&p2);
    printf("*p1: %d, *p2 : %d\n",*p1,*p2);


    int matrix[2][3] = {{1,2,3},{4,5,6}};\
    int *p3 = &matrix[0][0];
    for(int i = 0;i<6;i++){
        printf("%d ",*(p3+i));
    }
    
    
    return 0;
}

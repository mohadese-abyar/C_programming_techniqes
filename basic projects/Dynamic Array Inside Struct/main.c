
#include <stdio.h>
#include <stdlib.h>

typedef struct  {
    int *data; 
    int size; 

}Vector;



Vector createVector (int size){
    Vector v;
    v.size =  size;
    v.data = (int *)malloc(size * sizeof(int));
    return v;
}



int main() {
    Vector vec = createVector(3);
    vec.data[0] = 100;
   printf("First element : %d\n",vec.data[0]);
    
    
    return 0;
}

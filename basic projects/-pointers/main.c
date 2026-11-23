#include <stdio.h>
#include <stdlib.h>

struct Point{
    int x;
    int y;

 
};

int main() {
  struct Point p1 = {10,20};
 struct Point *ptr = &p1;
    
  
    printf("X:%d , Y: %d \n",ptr->x,ptr->y);
    (*ptr).x = 15;
    printf("Updated X: %d\n",ptr->x);

    
    return 0;
}

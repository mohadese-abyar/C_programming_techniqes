#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int width;
    int height;

}Rectangle;
void scale (Rectangle *r, int factor){
    r->width *= factor;
    r->height *= factor;
    
}

int main() {
  Rectangle rect = {5,10};
    scale (&rect,2);
    printf("Width: %d , Height : %d\n", rect.width , rect.height);
    return 0;
}

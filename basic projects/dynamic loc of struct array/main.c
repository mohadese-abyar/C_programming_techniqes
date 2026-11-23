#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int code;
    float price; 
}Item;

int main() {
   int n = 2;
    Item *list = (Item *)malloc(n * sizeof(Item));
    list[0].code = 501; list[0].price = 12.5;
    list[1].code = 502; list[1].price = 45.0;

    
    for (int i = 0; i< n;i++){
     printf("Code : %d , price: %.2f \n",list[i].code, list[i].price);
}
   free(list);
   
    
    return 0;
}

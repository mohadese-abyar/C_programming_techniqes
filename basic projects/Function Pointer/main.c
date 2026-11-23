#include <stdio.h>
void greet(){
    printf("Hello from function pionter!");
}

int main() {
   void (*funcPtr)()=greet;
    funcPtr();
    return 0;
}

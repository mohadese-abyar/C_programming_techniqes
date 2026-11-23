#include <stdio.h>

void changeValue(int x) {
    x = 100;
}

int main() {
    int num = 10;
    changeValue(num);
    
    printf("Num is: %d\n", num);
    
    return 0;
}

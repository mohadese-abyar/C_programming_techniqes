#include <stdio.h>

int stringLength(char *str){
    char *p = str;
    // 'U'
    // arrays end in C with '\0'
    
    while(*p!= '\0'){
        p++;
    }
    return p - str;
}

int main() {
    char name[] = "University";
    printf("Length : %d\n",stringLength(name));
    return 0;
}

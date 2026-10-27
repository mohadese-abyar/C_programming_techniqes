#include <stdio.h>


void customStrcpy(char *dest, char *src){
    while ((*dest = *src)!= '\0'){
        dest++;
        src++;
    }
}


int main() {
    char src[] = "DataStructure";
    char dest[20];
    customStrcpy(dest,src);
    printf("Copied: %s\n", dest);
    return 0;
}

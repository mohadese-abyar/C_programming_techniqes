#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * customStrdup(const char *src){
    char *dest = (char *)malloc((strlen(src)+1)*  sizeof(int));
    if (dest != NULL){
        strcpy(dest,src);
    }
}


int main() {
    char *str = customStrdup("Data Structure");
    printf("%s\n",str);
    free(str);
    return 0;
}

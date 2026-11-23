
#include <stdio.h>

int main(){

    FILE *fp  = fopen("output.text", "r");
    if (fp == NULL) return 1;

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fp) != EOF) {
        printf("%s", buffer);
    }
    fclose(fp);
    return 0;
}
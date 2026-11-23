#include <stdio.h>

int main() {
    FILE *fp = fopen("data.bin", "rb");
    if (fp == NULL) return 1;

    fseek(fp, 0, SEEK_END); 
    long size = ftell(fp); 

    printf("File size: %ld bytes\n", size);
    fclose(fp);
    return 0;
}
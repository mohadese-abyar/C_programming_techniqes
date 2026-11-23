#include <stdio.h>

int main(){
    FILE *fp = fopen("output.txt", "r"); // حالت خواندن
    if (fp == NULL) return 1;


    int ch;
    while ((ch == fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
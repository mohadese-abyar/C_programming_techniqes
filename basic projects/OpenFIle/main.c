#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "w"); // حالت نوشتن
    if (fp == NULL) return 1;

    fprintf(fp, "Score: %d\n", 100);
    fclose(fp);
    return 0;
}
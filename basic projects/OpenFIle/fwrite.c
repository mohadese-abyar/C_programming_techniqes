#include <stdio.h>

typedef struct {
    int id;
    float val;
} Data;

int main() {

    FILE *fp = fopen("data.bin", "wb");
    if (fp == NULL) return 1;

    Data d1 = {1, 99.5f};
    fwrite(&d1, sizeof(Data), 1, fp);
    fclose(fp);
    

    fp = fopen("data.bin", "rb");
    if (fp == NULL) return 1;

    Data d2 = {0, 0.0f}; 
    fread(&d2, sizeof(Data), 1, fp);
    printf("Read ID: %d, Val: %.1f\n", d2.id, d2.val);
    fclose(fp);
    return 0;
}
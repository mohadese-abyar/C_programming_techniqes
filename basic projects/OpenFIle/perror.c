#include <stdio.h>

int main (){

    FILE *fp = fopen("non_existent_file.txt","r");

    if (fp == NULL){
        perror("Error opening file");
        return 1;

    }
    fclose(fp);
    return 0;

}
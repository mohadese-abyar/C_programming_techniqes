#include <stdio.h>

int main (){

    FILE *fp = fopen("output.txt", "r");
    if (fp == NULL) return 1;


    char name[20];
    int age;

    while (fscanf(fp, "%s %d" ,name , &age) == 2){
        
        printf("Name: %s, Age: %d\n", name, age);

    }
    fclose(fp);
    return 0;
}
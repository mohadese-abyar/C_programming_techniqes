#include <stdio.h>

typedef struct {
    int id;
    int score;

}Student;


int main() {
    FILE *fp = fopen("log.txt", "a");
    if (fp == NULL) return 1;

    fprintf(fp, "New log entry\n");
    fclose(fp);


    Student list[2] = {{10,90},{20,85}};
    FILE *fp2 = fopen("Students.txt","w");

    for (int i = 0; i < 2 ; i++){
        fprintf(fp2, "ID: %d , Score : %d\n", list[i].id, list[i].score);

    }
    fclose(fp2);



    return 0;
}
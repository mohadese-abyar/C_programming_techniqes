#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int id;
    float gpa;
} Student;


int main() {
    int count = 2;
    Student *list = (Student *)malloc(count * sizeof(Student));

    list[0].id = 101;list[0].gpa = 3.8;
    list[1].id = 102;list[1].gpa = 3.5;

     for (int i =0;i<count ;i++){
         printf("ID : %d, GPA : %.1f \n",list[i].id, list[i].gpa);
     }
    free(list);
    

    return 0;
}

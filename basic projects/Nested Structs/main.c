#include <stdio.h>
#include <stdlib.h>

struct Data{
    int day;
    int month;
    int year;
};
struct Event{
  char name[20] ;
    struct Data date;
};

int main() {
  struct Event e1 = {"Exam",{24,2,2023}};
    printf("Event : %s on %d/%d/%d\n",e1.name,e1.date.day,e1.date.month, e1.date.year);

    return 0;
}

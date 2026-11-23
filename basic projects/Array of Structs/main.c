#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    int score;

 
}Player;

int main() {
    Player team[3] ={{1,95},{2,88},{3,92}};

    
for (int i = 0; i< 3;i++){
     printf("Player %d - score: %d \n",team[i].id, team[i].score);
}
   
   
    
    return 0;
}

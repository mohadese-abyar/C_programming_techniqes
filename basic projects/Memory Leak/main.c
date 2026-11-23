#include <stdio.h>
#include <stdlib.h>

int processData(){
    int *data = (int *)malloc(100 *sizeof(int));
    if (data == NULL) return -1;
    int errorOccured = 1;
    if (errorOccured){
        free(data);
        return -1;    
    }
    free(data);
    return 0;
}

int main() {

    return 0;
}

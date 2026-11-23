#include <stdio.h>

void f1(int n);
void f2 (int n);

void f1(int n ){
    if (n <= 0) return;
    printf("1");
    f2(n-2);

}

void f2(int n){
    if (n <=0 ) return;
    printf("2");
    f1(n+1);
}

int main(){
    f1(5);
    return 0;


}
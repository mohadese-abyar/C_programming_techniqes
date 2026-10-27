#include <stdio.h>
#include <string.h>

int isPalindrome(char *str){
    char *left = str;
    char *right = str + strlen(str) -1;
    while (left<right){
        if (*left != *right) return 0;
        left ++;
        right --;
    }
    return 1;
}




int main() {

    printf("%d\n",isPalindrome("radar"));
    printf("%d\n",isPalindrome("hello"));
    return 0;
}

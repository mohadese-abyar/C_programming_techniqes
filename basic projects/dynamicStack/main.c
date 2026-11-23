#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *items;
    int top;
    int capacity;

} DynamicStack;

DynamicStack* createStack(int capacity){
    DynamicStack *stack = (DynamicStack *)malloc(sizeof(DynamicStack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->items =(int *)malloc(capacity * sizeof(int));
    return stack;
}

void push(DynamicStack *s, int val){
    if (s->top  < s->capacity -1){
        s->items[++(s->top)] = val;
    }
}

int main() {
    DynamicStack *s = createStack(5);
    push(s,10);
    push(s,20);
    printf("Top item : %d\n",s->items[s->top]);
    free(s->items);
    free(s);
    return 0;
}

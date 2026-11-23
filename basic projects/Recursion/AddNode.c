#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node *next;

} Node;

void insertHead(Node **head_ref, int new_data){
Node *new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = new_data;
    new_node -> next = *head_ref;
    *head_ref = new_node;
}


int main(){

    Node *head = NULL;
    insertHead(&head, 20);
    insertHead(&head, 10);
    printf("%d -> %d\n", head->data,
    head->next->data);

    return 0;


}
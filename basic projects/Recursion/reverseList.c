#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;


Node* reverseList(Node *head){
    Node *perv = NULL;
    Node *current = head;
    Node *next = NULL;
    
    while(current != NULL){

        next = current->next ;

        current -> next = perv;


        perv = current;
        current = next;


    }

    return perv;}
   

void printList(Node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    // ساخت دستی لیست: 10 -> 20 -> 30 -> NULL
    Node *n1 = (Node *)malloc(sizeof(Node));
    Node *n2 = (Node *)malloc(sizeof(Node));
    Node *n3 = (Node *)malloc(sizeof(Node));
    n1->data = 10; n1->next = n2;
    n2->data = 20; n2->next = n3;
    n3->data = 30; n3->next = NULL;

    Node *head = n1;
    printf("Original: ");
    printList(head);

    head = reverseList(head);
    printf("Reversed: ");
    printList(head);

    // آزادسازی حافظه
    free(n1); free(n2); free(n3);
    return 0;
}



#include <stdio.h>
#include <stdlib.h>


typedef struct Node{

    int data;
    struct Node *next;

}Node;

void deleteNode(Node **head_ref, int key){
    Node *temp = *head_ref,*perv = NULL;

    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    } while(temp != NULL && temp-> data != key){
        perv = temp;
        temp = temp->next;

    }if (temp == NULL) return;
    perv->next = temp->next;
    free(temp);

}


void printList(Node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void insertHead(Node **head_ref, int new_data){
Node *new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = new_data;
    new_node -> next = *head_ref;
    *head_ref = new_node;
} 

int main() {
    Node *head = NULL;
    insertHead(&head, 30);
    insertHead(&head, 20);
    insertHead(&head, 10);

    printf("Before delete: ");
    printList(head); // 10 -> 20 -> 30 -> NULL

    deleteNode(&head, 20);
    printf("After deleting 20: ");
    printList(head); // 10 -> 30 -> NULL

    deleteNode(&head, 10);
    printf("After deleting 10 (head): ");
    printList(head); // 30 -> NULL

    return 0;}



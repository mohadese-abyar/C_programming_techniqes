#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{

    int data;
    struct TreeNode *left;
    struct TreeNode *right;

   
    
}TreeNode;


TreeNode* createNode(int data){
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inOrderTraversl( TreeNode *root){
    if (root == NULL) return;

    inOrderTraversl(root->left);
    printf("%d ", root->data);
    inOrderTraversl(root->right);

}

int main(){

    TreeNode *root = createNode(20);
    root->left = createNode(10);
    root->right = createNode(30);

    printf("In-Order Traversal: ");
    inOrderTraversl(root);
    printf("\n");

    free(root->left);
    free(root->right);
    free(root);
    return 0;

}
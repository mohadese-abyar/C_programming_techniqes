#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;


TreeNode* createNode(int data) {
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

TreeNode* insertBST(TreeNode *root, int data){
    if(root == NULL){
        return createNode(data);
    }
    
    if (data < root->data){
        root->left = insertBST(root->left,data);
    }
    else if (data > root->data){
        root->right = insertBST(root->right, data);
    }

    return root;

}

void freeTree(TreeNode *root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}


int treeHeight(TreeNode *root){
    if (root == NULL) return 0;

    int leftH = treeHeight(root->left);
    int rightH = treeHeight(root->right);
    
    return 1 + (leftH > rightH ? leftH : rightH);


}



void inOrderTraversl( TreeNode *root){
    if (root == NULL) return;
    inOrderTraversl(root->left);
    printf("%d ", root->data);
    inOrderTraversl(root->right);}


int main(){
    TreeNode *root = NULL;

    root = insertBST(root, 50);
    root = insertBST(root, 30);
    root = insertBST(root, 70);
    root = insertBST(root, 20);
    root = insertBST(root, 40);

    printf("Stored (In-Order): ");
    inOrderTraversl(root);
    printf("\n");

    printf("Tree Height: %d\n", treeHeight(root));

    freeTree(root);
    return 0;


    
}
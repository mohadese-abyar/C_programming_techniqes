#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
    int data;
    struct TreeNode *left;
    struct  TreeNode *right;
  
    
}TreeNode;


TreeNode *createNode (int data){
    TreeNode *node = (TreeNode *)malloc (sizeof(TreeNode));

    node ->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;

}



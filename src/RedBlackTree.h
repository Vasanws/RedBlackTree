#ifndef REDBLACKTREE_H
#define REDBLACKTREE_H
#include <stddef.h>

typedef struct RbtNode RbtNode;
// create red black tree node struct 
struct RbtNode {
  
  int data;
  int colour;
  RbtNode* parent;
  RbtNode* left;
  RbtNode* right;
};


// function to perform Rbt insertion a node 
struct RbtNode* rbtAddNode(RbtNode** rootPtr, RbtNode* newNode) {
  RbtNode* root = *rootPtr;
  //if tree is empty, return a new node 
  if(root == NULL) 
    return newNode;
    
  //otherwise recursive down the tree 
  if(newNode->data < root->data) {
    root->left = rbtAddNode(root->left, newNode);
    root->left->parent = root;
    
  }else if(newNode->data > root->data) {
        root->right = rbtAddNode(root->right, newNode);
        root->right->parent = root;
  }
}

void rightRotate(struct RbtNode* prev_node);
void leftRotate(struct RbtNode* prev_node);

#endif // REDBLACKTREE_H

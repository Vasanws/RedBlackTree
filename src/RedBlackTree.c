#include "RedBlackTree.h"
#include <stdio.h>
#include <stdlib.h>


// function performing right rotation
void rightRotate(struct RbtNode* prev_node) {
  
  struct RbtNode* root = NULL;
  struct RbtNode* L = prev_node->left;
  prev_node->left = L->right;
  if(prev_node->left) 
     prev_node->left->parent = prev_node;
  
  L->parent = prev_node->parent;
  
  if(!prev_node->parent) 
     root = L;
  else if(prev_node == prev_node->parent->left) 
          prev_node->parent->left = L;
  else 
      prev_node->parent->right = L;
      
  L->right = prev_node;
  prev_node->parent = L;
}

//function performing left rotation 
void leftRotate(struct RbtNode* prev_node) {
  
  struct RbtNode* root = NULL;
  struct RbtNode* R = prev_node->right;
  prev_node->right = R->left;
  if(prev_node->right) 
     prev_node->right->parent = prev_node;
  
  R->parent = prev_node->parent;
  
  if(!prev_node->parent) 
     root = R;
  else if(prev_node == prev_node->parent->right) 
          prev_node->parent->left = R;
  else 
     prev_node->parent->right = R;
  R->left = prev_node;
  prev_node->parent = R;
}


//function insertion fixup / fixup of red black tree

//function insertion 

//function deletion 

//function left-right rotation 

//function right-left rotation 





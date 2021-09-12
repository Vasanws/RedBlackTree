#include "RedBlackTree.h"
#include <stdio.h>
#include <stdlib.h>



RbtNode* rbtCreateNode(int data) {
  RbtNode* newNode = NULL;
  newNode = (RbtNode*)malloc(sizeof(RbtNode));
  newNode->left = newNode->right = NULL;
  newNode->data = data;
  newNode->colour = RED;
}

// function performing right rotation
void rightRotate(RbtNode** rootPtr) {
  RbtNode* root = *rootPtr;
  RbtNode* leftChild = root->left;
  
  if(leftChild->left == NULL) {
    root->left = leftChild->right;
    leftChild->right = root;
    leftChild->left = NULL;
    *rootPtr = leftChild;
  }else if(root->left) {
          root->left = leftChild->right;
          leftChild->right = root;
          *rootPtr = leftChild;
  }
}

//function performing left rotation 
void leftRotate(RbtNode** rootPtr) {
  RbtNode* root = *rootPtr;
  RbtNode* rightChild = root->right;

  if(rightChild->right == NULL) {
    root->right = rightChild->left;
    rightChild->left = root;
    rightChild->right = NULL;
    *rootPtr = rightChild;
  }else if(root->right) {
          root->right = rightChild->left;
          rightChild->left = root;
          *rootPtr = rightChild;
          
  }   
}

// function performing right-left rotation 
void rightLeftRotate(RbtNode** rootPtr) {
  RbtNode* root = *rootPtr;
  RbtNode* rightChild = root->right;
  RbtNode* grandChild = rightChild->left;
  
  rightChild->left = grandChild->right;
  root->right = grandChild->left;
  
  grandChild->right = rightChild;
  grandChild->left = root;
  *rootPtr = grandChild;
}

// function performing left-right rotation
void leftRightRotate(RbtNode** rootPtr) {
  RbtNode* root = *rootPtr;
  RbtNode* leftChild = root->left;
  RbtNode* grandChild = leftChild->right;
  
  leftChild->right = grandChild->left;
  root->left = grandChild->right;
 
  grandChild->left = leftChild;
  grandChild->right = root;
  *rootPtr = grandChild;
}

// insert new node into the tree
RbtNode* rbtAddNode(RbtNode** rootPtr, RbtNode* newNode) {
  RbtNode* root = *rootPtr;
  if(root == NULL) {
    root = newNode;
    return root;
  }
  if(newNode->data < root->data) {
    root->left = rbtAddNode(&root->left, newNode);
  }else if(newNode->data > root->data) { 
    root->right = rbtAddNode(&root->right, newNode);
  }
  rbtFixup(&root, newNode);
  return root;
}

void rbtFixup(RbtNode** rootPtr, RbtNode* newNode) {
  RbtNode* root = *rootPtr;
  RbtNode* leftChild, *rightChild;
  RbtNode* grandChildRight, *grandChildLeft;
  RbtColour leftChildColour, rightChildColour;
  RbtColour grandChildRightColour, grandChildLeftColour;
  
  // Case 2, rotation
  if(newNode->data < root->data) {
    leftChild = root->left;
    grandChildRight = leftChild->right;
    grandChildLeft = leftChild->left;
    leftChildColour = leftChild->colour;
 
    grandChildRightColour = getRbtNodeColour(grandChildRight);
    grandChildLeftColour = getRbtNodeColour(grandChildLeft);
    
    // Case 2A, do left-right rotation (Right side Tree / Left side Tree)
    if(leftChildColour == RED && grandChildRightColour == RED) {
      rightChild = root->right;
      rightChildColour = getRbtNodeColour(rightChild);
      if(rightChildColour == BLACK) {
        grandChildRight->colour = BLACK;
        root->colour = RED;
        leftRightRotate(rootPtr);
      }else {
        flipColour(leftChild);
        flipColour(rightChild);
        flipColour(root);
      }
    }
    // Case 2B, do right rotation (Right side Tree / Left side Tree)
    if(leftChildColour == RED && grandChildLeftColour == RED) {
      rightChild = root->right;
      rightChildColour = getRbtNodeColour(rightChild);
      if(rightChildColour == BLACK) {
        leftChild->colour = BLACK;
        root->colour = RED;
        rightRotate(rootPtr);
      }else {
        flipColour(leftChild);
        flipColour(rightChild);
        flipColour(root);
      }        
     }
   }
   // Case 3, rotation
  if(newNode->data > root->data) {
    rightChild = root->right;
    grandChildRight = rightChild->right;
    grandChildLeft = rightChild->left;
    rightChildColour = rightChild->colour;
    
    grandChildRightColour = getRbtNodeColour(grandChildRight);
    grandChildLeftColour = getRbtNodeColour(grandChildLeft);
    
    // Case 3A, do right-left rotation (Right side Tree / Left side Tree)
    if(rightChildColour == RED && grandChildLeftColour == RED) {
      leftChild = root->left;
      leftChildColour = getRbtNodeColour(leftChild);
      if(leftChildColour == BLACK) {
        grandChildLeft->colour = BLACK;
        root->colour = RED;
        rightLeftRotate(rootPtr);
      }else {
        flipColour(rightChild);
        flipColour(leftChild);
        flipColour(root);
      }
    }
   // Case 3B, do left rotate (Right side Tree / Left side Tree)
   if(rightChildColour == RED && grandChildRightColour == RED) {
     leftChild = root->left;
     leftChildColour = getRbtNodeColour(leftChild);
     if(leftChildColour == BLACK) {
       rightChild->colour = BLACK;
       root->colour = RED;
       leftRotate(rootPtr);
     }else {
       flipColour(rightChild);
       flipColour(leftChild);
       flipColour(root);
     }
   } 
 }
} 

void flipColour(RbtNode* node) {
  if(node->colour == RED) {
    node->colour = BLACK;
  }else {
    node->colour = RED;
  }
}

RbtColour getRbtNodeColour(RbtNode* node) {
  if(node == NULL) {
    return BLACK;
  }else {
    return node->colour;
  }
}
    






 
  



  
  
  
  
  
  

 








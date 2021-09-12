#ifndef REDBLACKTREE_H
#define REDBLACKTREE_H

#include <stddef.h>

typedef struct RbtNode RbtNode;
//              0      1
typedef enum  {BLACK, RED} RbtColour;
// create red black tree node struct 
struct RbtNode {
  int data;
  RbtColour colour;
  RbtNode* left;
  RbtNode* right;
};

RbtNode* rbtCreateNode(int data);
RbtNode* rbtAddNode(RbtNode** rootPtr, RbtNode* newNode);
RbtColour getRbtNodeColour(RbtNode* node);
void rightRotate(RbtNode** rootPtr);
void leftRotate(RbtNode** rootPtr);
void rightLeftRotate(RbtNode** rootPtr);
void leftRightRotate(RbtNode** rootPtr);
void rbtFixup(RbtNode** rootPtr, RbtNode* newNode);
void flipColour(RbtNode* node);


#endif // REDBLACKTREE_H

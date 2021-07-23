#include "unity.h"
#include "RedBlackTree.h"

void setUp(void){}
void tearDown(void){}

/*void test_RedBlackTree_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement RedBlackTree");
}
*/

/*
        100                50
        /                 /  \
      50         ==>     10  100
      /         rotate
    10          right
*/

void test_rightRotate_given_100_50_10_expect_correct_rotation() {
  
  struct RbtNode* root = NULL;
  struct RbtNode node;
  struct RbtNode* newNode;
  
  int n = 3;
  int arr[] = {};
  for(int i = 0; i < n; i++) {
    node.data = arr[i];
    node.colour = 0;
    node.parent = node.left = node.right = NULL;
    newNode = &node;
    root = rbtAddNode(&root, newNode);
  }
  
  rightRotate(root);
  
  TEST_ASSERT_EQUAL("100", root);
  TEST_ASSERT_EQUAL("50",root->left->data);
  TEST_ASSERT_EQUAL("10",root->left->left->data);
  TEST_ASSERT_NULL(root->left->left->left);
  TEST_ASSERT_EQUAL("50", root);
  TEST_ASSERT_EQUAL("10", root->left->data);
  TEST_ASSERT_NULL(root->left->left);
  TEST_ASSERT_EQUAL("100",root->right->data);
  TEST_ASSERT_NULL(root->right->right);
}

/*
    100               50
   /        ==>      / \
  50      rotate  NULL 100
          right
*/

void test_rightRotate_given_100_50_expect_correct_rotation() {
  
  struct RbtNode* root = NULL;
  struct RbtNode node;
  struct RbtNode* newNode;
  
  int n = 2;
  int arr[] = {};
  for(int i = 0; i < n; i++) {
    node.data = arr[i];
    node.colour = 0;
    node.parent = node.left = node.right = NULL;
    newNode = &node;
    root = rbtAddNode(&root, newNode);
  }
  
  rightRotate(root);
  
  TEST_ASSERT_EQUAL("100", root);
  TEST_ASSERT_EQUAL("50",root->left->data);
  TEST_ASSERT_NULL(root->left->left);
  TEST_ASSERT_EQUAL("50", root);
  TEST_ASSERT_EQUAL("100",root->right->data);
  TEST_ASSERT_NULL(root->left);
}

/*
  
    50  ==>   50
       rotate
       right

*/

void test_rightRotate_given_50_expect_no_root_rotation() {
  
  struct RbtNode* root = NULL;
  struct RbtNode node;
  struct RbtNode* newNode;
  
  node.data = 50;
  node.colour = 0;
  node.parent = node.left = node.right = NULL;
  newNode = &node;
  root = rbtAddNode(&root, newNode);
  
  rightRotate(root);
  
  TEST_ASSERT_EQUAL("50", root);
}

/*

  NULL ==>  NULL
      rotate
      right
*/

void test_rightRotate_given_NULL_expect_no_rotation() {
  
  struct RbtNode* root = NULL;
  struct RbtNode node;
  struct RbtNode* newNode;
  
  node.data = NULL;
  node.colour = 0;
  node.parent = node.left = node.right = NULL;
  newNode = &node;
  root = rbtAddNode(&root, newNode);
  
  rightRotate(root);
  
  TEST_ASSERT_NULL(root);
  
}

/*
    60                      100
      \                    /  \
      100       ==>       60  150
        \      rotate
        150    left
*/

void test_leftRotation_given_60_100_150_expect_left_rotation() {
  
  struct RbtNode* root = NULL;
  struct RbtNode node;
  struct RbtNode* newNode;
  
  int n = 3;
  int arr[] = {};
  for(int i = 0; i < n; i++) {
    node.data = arr[i];
    node.colour = 0;
    node.parent = node.left = node.right = NULL;
    newNode = &node;
    root = rbtAddNode(&root, newNode);
  }
  
  leftRotate(root);
  
  TEST_ASSERT_EQUAL("60", root);
  TEST_ASSERT_EQUAL("100", root->right->data);
  TEST_ASSERT_EQUAL("150", root->right->right->data);
  TEST_ASSERT_NULL(root->right->right->right);
  TEST_ASSERT_EQUAL("100", root);
  TEST_ASSERT_EQUAL("60", root->left->data);
  TEST_ASSERT_NULL(root->left->left);
  TEST_ASSERT_EQUAL("150", root->right->data);
  TEST_ASSERT_NULL(root->right->right);
}

/*
     60                     100
       \        ===>       /  \
       100                60  NULL

*/
void test_leftRotation_given_60_100_expect_left_rotation() {
  
  struct RbtNode* root = NULL;
  struct RbtNode node;
  struct RbtNode* newNode;
  
  int n = 2;
  int arr[] = {};
  for(int i = 0; i < n; i++) {
    node.data = arr[i];
    node.colour = 0;
    node.parent = node.left = node.right = NULL;
    newNode = &node;
    root = rbtAddNode(&root, newNode);
  }
  
  leftRotate(root);
  
  TEST_ASSERT_EQUAL("60", root);
  TEST_ASSERT_EQUAL("100",root->right->data);
  TEST_ASSERT_NULL(root->right->right);
  TEST_ASSERT_EQUAL("100", root);
  TEST_ASSERT_EQUAL("60",root->left->data);
  TEST_ASSERT_NULL(root->right);
}

/*
  
    60  ==>   60
       rotate
       left

*/

void test_leftRotate_given_60_expect_no_root_rotation() {
  
  struct RbtNode* root = NULL;
  struct RbtNode node;
  struct RbtNode* newNode;
  
  node.data = 60;
  node.colour = 0;
  node.parent = node.left = node.right = NULL;
  newNode = &node;
  root = rbtAddNode(&root, newNode);
  
  leftRotate(root);
  
  TEST_ASSERT_EQUAL("60", root);
}

/*

  NULL ==>  NULL
      rotate
      left
*/

void test_leftRotate_given_NULL_expect_no_rotation() {
  
  struct RbtNode* root = NULL;
  struct RbtNode node;
  struct RbtNode* newNode;
  
  node.data = NULL;
  node.colour = 0;
  node.parent = node.left = node.right = NULL;
  newNode = &node;
  root = rbtAddNode(&root, newNode);
  
  leftRotate(root);
  
  TEST_ASSERT_NULL(root);
  
}


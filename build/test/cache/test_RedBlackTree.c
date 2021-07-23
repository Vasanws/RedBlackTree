#include "build/temp/_test_RedBlackTree.c"
#include "src/RedBlackTree.h"
#include "C:/Ruby25-x64/lib/ruby/gems/2.5.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"


void setUp(void){}

void tearDown(void){}

void test_rightRotate_given_100_50_10_expect_correct_rotation() {



  struct RbtNode* root = 

                        ((void *)0)

                            ;

  struct RbtNode node;

  struct RbtNode* newNode;



  int n = 3;

  int arr[] = {};

  for(int i = 0; i < n; i++) {

    node.data = arr[i];

    node.colour = 0;

    node.parent = node.left = node.right = 

                                          ((void *)0)

                                              ;

    newNode = &node;

    root = rbtAddNode(&root, newNode);

  }



  rightRotate(root);



  UnityAssertEqualNumber((UNITY_INT)(("100")), (UNITY_INT)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(("50")), (UNITY_INT)((root->left->data)), (

 ((void *)0)

 ), (UNITY_UINT)(40), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(("10")), (UNITY_INT)((root->left->left->data)), (

 ((void *)0)

 ), (UNITY_UINT)(41), UNITY_DISPLAY_STYLE_INT);

  do {if ((((root->left->left->left)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(42))));}} while(0);

  UnityAssertEqualNumber((UNITY_INT)(("50")), (UNITY_INT)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(("10")), (UNITY_INT)((root->left->data)), (

 ((void *)0)

 ), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_INT);

  do {if ((((root->left->left)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(45))));}} while(0);

  UnityAssertEqualNumber((UNITY_INT)(("100")), (UNITY_INT)((root->right->data)), (

 ((void *)0)

 ), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

  do {if ((((root->right->right)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(47))));}} while(0);

}

void test_rightRotate_given_100_50_expect_correct_rotation() {



  struct RbtNode* root = 

                        ((void *)0)

                            ;

  struct RbtNode node;

  struct RbtNode* newNode;



  int n = 2;

  int arr[] = {};

  for(int i = 0; i < n; i++) {

    node.data = arr[i];

    node.colour = 0;

    node.parent = node.left = node.right = 

                                          ((void *)0)

                                              ;

    newNode = &node;

    root = rbtAddNode(&root, newNode);

  }



  rightRotate(root);



  UnityAssertEqualNumber((UNITY_INT)(("100")), (UNITY_INT)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(("50")), (UNITY_INT)((root->left->data)), (

 ((void *)0)

 ), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_INT);

  do {if ((((root->left->left)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(77))));}} while(0);

  UnityAssertEqualNumber((UNITY_INT)(("50")), (UNITY_INT)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(78), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(("100")), (UNITY_INT)((root->right->data)), (

 ((void *)0)

 ), (UNITY_UINT)(79), UNITY_DISPLAY_STYLE_INT);

  do {if ((((root->left)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(80))));}} while(0);

}

void test_rightRotate_given_50_expect_no_root_rotation() {



  struct RbtNode* root = 

                        ((void *)0)

                            ;

  struct RbtNode node;

  struct RbtNode* newNode;



  node.data = 50;

  node.colour = 0;

  node.parent = node.left = node.right = 

                                        ((void *)0)

                                            ;

  newNode = &node;

  root = rbtAddNode(&root, newNode);



  rightRotate(root);



  UnityAssertEqualNumber((UNITY_INT)(("50")), (UNITY_INT)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(105), UNITY_DISPLAY_STYLE_INT);

}

void test_rightRotate_given_NULL_expect_no_rotation() {



  struct RbtNode* root = 

                        ((void *)0)

                            ;

  struct RbtNode node;

  struct RbtNode* newNode;



  node.data = 

             ((void *)0)

                 ;

  node.colour = 0;

  node.parent = node.left = node.right = 

                                        ((void *)0)

                                            ;

  newNode = &node;

  root = rbtAddNode(&root, newNode);



  rightRotate(root);



  do {if ((((root)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(129))));}} while(0);



}

void test_leftRotation_given_60_100_150_expect_left_rotation() {



  struct RbtNode* root = 

                        ((void *)0)

                            ;

  struct RbtNode node;

  struct RbtNode* newNode;



  int n = 3;

  int arr[] = {};

  for(int i = 0; i < n; i++) {

    node.data = arr[i];

    node.colour = 0;

    node.parent = node.left = node.right = 

                                          ((void *)0)

                                              ;

    newNode = &node;

    root = rbtAddNode(&root, newNode);

  }



  leftRotate(root);



  UnityAssertEqualNumber((UNITY_INT)(("60")), (UNITY_INT)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(159), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(("100")), (UNITY_INT)((root->right->data)), (

 ((void *)0)

 ), (UNITY_UINT)(160), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(("150")), (UNITY_INT)((root->right->right->data)), (

 ((void *)0)

 ), (UNITY_UINT)(161), UNITY_DISPLAY_STYLE_INT);

  do {if ((((root->right->right->right)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(162))));}} while(0);

  UnityAssertEqualNumber((UNITY_INT)(("100")), (UNITY_INT)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(163), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(("60")), (UNITY_INT)((root->left->data)), (

 ((void *)0)

 ), (UNITY_UINT)(164), UNITY_DISPLAY_STYLE_INT);

  do {if ((((root->left->left)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(165))));}} while(0);

  UnityAssertEqualNumber((UNITY_INT)(("150")), (UNITY_INT)((root->right->data)), (

 ((void *)0)

 ), (UNITY_UINT)(166), UNITY_DISPLAY_STYLE_INT);

  do {if ((((root->right->right)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(167))));}} while(0);

}















void test_leftRotation_given_60_100_expect_left_rotation() {



  struct RbtNode* root = 

                        ((void *)0)

                            ;

  struct RbtNode node;

  struct RbtNode* newNode;



  int n = 2;

  int arr[] = {};

  for(int i = 0; i < n; i++) {

    node.data = arr[i];

    node.colour = 0;

    node.parent = node.left = node.right = 

                                          ((void *)0)

                                              ;

    newNode = &node;

    root = rbtAddNode(&root, newNode);

  }



  leftRotate(root);



  UnityAssertEqualNumber((UNITY_INT)(("60")), (UNITY_INT)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(194), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(("100")), (UNITY_INT)((root->right->data)), (

 ((void *)0)

 ), (UNITY_UINT)(195), UNITY_DISPLAY_STYLE_INT);

  do {if ((((root->right->right)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(196))));}} while(0);

  UnityAssertEqualNumber((UNITY_INT)(("100")), (UNITY_INT)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(197), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)(("60")), (UNITY_INT)((root->left->data)), (

 ((void *)0)

 ), (UNITY_UINT)(198), UNITY_DISPLAY_STYLE_INT);

  do {if ((((root->right)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(199))));}} while(0);

}

void test_leftRotate_given_60_expect_no_root_rotation() {



  struct RbtNode* root = 

                        ((void *)0)

                            ;

  struct RbtNode node;

  struct RbtNode* newNode;



  node.data = 60;

  node.colour = 0;

  node.parent = node.left = node.right = 

                                        ((void *)0)

                                            ;

  newNode = &node;

  root = rbtAddNode(&root, newNode);



  leftRotate(root);



  UnityAssertEqualNumber((UNITY_INT)(("60")), (UNITY_INT)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(224), UNITY_DISPLAY_STYLE_INT);

}

void test_leftRotate_given_NULL_expect_no_rotation() {



  struct RbtNode* root = 

                        ((void *)0)

                            ;

  struct RbtNode node;

  struct RbtNode* newNode;



  node.data = 

             ((void *)0)

                 ;

  node.colour = 0;

  node.parent = node.left = node.right = 

                                        ((void *)0)

                                            ;

  newNode = &node;

  root = rbtAddNode(&root, newNode);



  leftRotate(root);



  do {if ((((root)) == 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(248))));}} while(0);



}

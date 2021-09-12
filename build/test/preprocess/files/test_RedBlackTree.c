#include "build/temp/_test_RedBlackTree.c"
#include "src/RedBlackTree.h"
#include "C:/Ruby25-x64/lib/ruby/gems/2.5.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"


RbtNode* createNode(int data, RbtColour colour, RbtNode* left, RbtNode* right);

RbtNode* rbtRoot;

RbtNode* node2, *node5, *node6, *node7, *node8, *node9, *node10, *node11, *node12;

RbtNode* node14, *node15, *node16, *node17, *node18, *node19, *node20, *node25, *node30;

RbtNode* node35, *node50, *node55, *node60, *node65, *node70;

int firstTime = 1;



void setUp(void){

  if(firstTime) {

    node2 = createNode(2, RED, 

                              ((void *)0)

                                  , 

                                    ((void *)0)

                                        );

    node5 = createNode(5, RED, 

                              ((void *)0)

                                  , 

                                    ((void *)0)

                                        );

    node6 = createNode(6, RED, 

                              ((void *)0)

                                  , 

                                    ((void *)0)

                                        );

    node7 = createNode(7, RED, 

                              ((void *)0)

                                  , 

                                    ((void *)0)

                                        );

    node8 = createNode(8, RED, 

                              ((void *)0)

                                  , 

                                    ((void *)0)

                                        );

    node9 = createNode(9, RED, 

                              ((void *)0)

                                  , 

                                    ((void *)0)

                                        );

    node10 = createNode(10, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node11 = createNode(11, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node12 = createNode(12, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node14 = createNode(14, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node15 = createNode(15, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node16 = createNode(16, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node17 = createNode(17, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node18 = createNode(18, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node19 = createNode(19, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node20 = createNode(20, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node25 = createNode(25, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node30 = createNode(30, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node35 = createNode(35, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node50 = createNode(50, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node55 = createNode(55, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node60 = createNode(60, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node65 = createNode(65, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    node70 = createNode(70, RED, 

                                ((void *)0)

                                    , 

                                      ((void *)0)

                                          );

    firstTime = 0;

  }

}



void resetRbtNode(RbtNode* node) {

  node->left = 

              ((void *)0)

                  ;

  node->right = 

               ((void *)0)

                   ;

  node->colour = RED;

}



void tearDown(void){

  resetRbtNode(node2);

  resetRbtNode(node5);

  resetRbtNode(node6);

  resetRbtNode(node7);

  resetRbtNode(node8);

  resetRbtNode(node9);

  resetRbtNode(node10);

  resetRbtNode(node11);

  resetRbtNode(node12);

  resetRbtNode(node14);

  resetRbtNode(node15);

  resetRbtNode(node16);

  resetRbtNode(node17);

  resetRbtNode(node18);

  resetRbtNode(node19);

  resetRbtNode(node20);

  resetRbtNode(node25);

  resetRbtNode(node30);

  resetRbtNode(node35);

  resetRbtNode(node50);

  resetRbtNode(node55);

  resetRbtNode(node60);

  resetRbtNode(node65);

  resetRbtNode(node70);

}



void setupRbtNode(RbtNode* node, RbtColour colour, RbtNode* left, RbtNode* right) {

  node->colour = colour;

  node->left = left;

  node->right = right;

}

RbtNode* createNode(int data, RbtColour colour, RbtNode* left, RbtNode* right) {

  RbtNode* newNode = rbtCreateNode(data);

  newNode->colour = colour;

  newNode->left = left;

  newNode->right = right;

  return newNode;

}

void test_rightRotate_given_100_50_10_expect_correct_rotation() {



  rbtRoot = node50;



  setupRbtNode(node7, RED, 

                          ((void *)0)

                              , 

                                ((void *)0)

                                    );

  setupRbtNode(node15, RED, node7, 

                                  ((void *)0)

                                      );

  setupRbtNode(node50, RED, node15, 

                                   ((void *)0)

                                       );



  rightRotate(&rbtRoot);



  UnityAssertEqualNumber((UNITY_INT)((node15)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(116), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node7)), (UNITY_INT)((node15->left)), (

 ((void *)0)

 ), (UNITY_UINT)(117), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node50)), (UNITY_INT)((node15->right)), (

 ((void *)0)

 ), (UNITY_UINT)(118), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->left)), (

 ((void *)0)

 ), (UNITY_UINT)(119), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->right)), (

 ((void *)0)

 ), (UNITY_UINT)(120), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node50->left)), (

 ((void *)0)

 ), (UNITY_UINT)(121), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node50->right)), (

 ((void *)0)

 ), (UNITY_UINT)(122), UNITY_DISPLAY_STYLE_INT);

}

void test_rightRotate_given_50_15_55_10_14_expect_right_rotate() {



  rbtRoot = node50;



  setupRbtNode(node10, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node14, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node15, RED, node10, node14);

  setupRbtNode(node55, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node50, RED, node15, node55);



  rightRotate(&rbtRoot);



  UnityAssertEqualNumber((UNITY_INT)((node15)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(145), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node10)), (UNITY_INT)((node15->left)), (

 ((void *)0)

 ), (UNITY_UINT)(146), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node50)), (UNITY_INT)((node15->right)), (

 ((void *)0)

 ), (UNITY_UINT)(147), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node14)), (UNITY_INT)((node50->left)), (

 ((void *)0)

 ), (UNITY_UINT)(148), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node55)), (UNITY_INT)((node50->right)), (

 ((void *)0)

 ), (UNITY_UINT)(149), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node14->left)), (

 ((void *)0)

 ), (UNITY_UINT)(150), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node14->right)), (

 ((void *)0)

 ), (UNITY_UINT)(151), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->left)), (

 ((void *)0)

 ), (UNITY_UINT)(152), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->right)), (

 ((void *)0)

 ), (UNITY_UINT)(153), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node10->left)), (

 ((void *)0)

 ), (UNITY_UINT)(154), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node10->right)), (

 ((void *)0)

 ), (UNITY_UINT)(155), UNITY_DISPLAY_STYLE_INT);

}

void test_rightRotate_given_18_9_expect_correct_rotation() {



  rbtRoot = node18;



  setupRbtNode(node9, RED, 

                          ((void *)0)

                              , 

                                ((void *)0)

                                    );

  setupRbtNode(node18, RED, node9, 

                                  ((void *)0)

                                      );



  rightRotate(&rbtRoot);



  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(174), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(175), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(176), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(177), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(178), UNITY_DISPLAY_STYLE_INT);

}

void test_leftRotation_given_50_60_70_expect_left_rotation() {



  rbtRoot = node50;



  setupRbtNode(node70, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node60, RED, 

                           ((void *)0)

                               , node70);

  setupRbtNode(node50, RED, 

                           ((void *)0)

                               , node60);



  leftRotate(&rbtRoot);



  UnityAssertEqualNumber((UNITY_INT)((node60)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(199), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node50)), (UNITY_INT)((node60->left)), (

 ((void *)0)

 ), (UNITY_UINT)(200), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node70)), (UNITY_INT)((node60->right)), (

 ((void *)0)

 ), (UNITY_UINT)(201), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node50->left)), (

 ((void *)0)

 ), (UNITY_UINT)(202), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node50->right)), (

 ((void *)0)

 ), (UNITY_UINT)(203), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node70->left)), (

 ((void *)0)

 ), (UNITY_UINT)(204), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node70->right)), (

 ((void *)0)

 ), (UNITY_UINT)(205), UNITY_DISPLAY_STYLE_INT);

}

void test_leftRotate_given_node_20_15_30_25_35_expect_left_rotate() {



  rbtRoot = node20;



  setupRbtNode(node25, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node35, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node15, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node30, RED, node25, node35);

  setupRbtNode(node20, RED, node15, node30);



  leftRotate(&rbtRoot);



  UnityAssertEqualNumber((UNITY_INT)((node30)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(229), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node20)), (UNITY_INT)((node30->left)), (

 ((void *)0)

 ), (UNITY_UINT)(230), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node35)), (UNITY_INT)((node30->right)), (

 ((void *)0)

 ), (UNITY_UINT)(231), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node15)), (UNITY_INT)((node20->left)), (

 ((void *)0)

 ), (UNITY_UINT)(232), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node25)), (UNITY_INT)((node20->right)), (

 ((void *)0)

 ), (UNITY_UINT)(233), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node15->left)), (

 ((void *)0)

 ), (UNITY_UINT)(234), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node15->right)), (

 ((void *)0)

 ), (UNITY_UINT)(235), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node25->left)), (

 ((void *)0)

 ), (UNITY_UINT)(236), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node25->right)), (

 ((void *)0)

 ), (UNITY_UINT)(237), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node35->left)), (

 ((void *)0)

 ), (UNITY_UINT)(238), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node35->right)), (

 ((void *)0)

 ), (UNITY_UINT)(239), UNITY_DISPLAY_STYLE_INT);

}















void test_leftRotation_given_12_and_14_expect_left_rotation() {



  rbtRoot = node12;



  setupRbtNode(node14, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node12, RED, 

                           ((void *)0)

                               , node14);



  leftRotate(&rbtRoot);



  UnityAssertEqualNumber((UNITY_INT)((node14)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(257), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((node14->left)), (

 ((void *)0)

 ), (UNITY_UINT)(258), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node14->right)), (

 ((void *)0)

 ), (UNITY_UINT)(259), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(260), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(261), UNITY_DISPLAY_STYLE_INT);

}

void test_rightLeftRotate_given_2_7_5_expect_right_left_rotate_correctly() {



  rbtRoot = node2;



  setupRbtNode(node5, RED, 

                          ((void *)0)

                              , 

                                ((void *)0)

                                    );

  setupRbtNode(node7, RED, node5, 

                                 ((void *)0)

                                     );

  setupRbtNode(node2, RED, 

                          ((void *)0)

                              , node7);



  rightLeftRotate(&rbtRoot);



  UnityAssertEqualNumber((UNITY_INT)((node5)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(281), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node2)), (UNITY_INT)((node5->left)), (

 ((void *)0)

 ), (UNITY_UINT)(282), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node7)), (UNITY_INT)((node5->right)), (

 ((void *)0)

 ), (UNITY_UINT)(283), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node2->left)), (

 ((void *)0)

 ), (UNITY_UINT)(284), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node2->right)), (

 ((void *)0)

 ), (UNITY_UINT)(285), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->left)), (

 ((void *)0)

 ), (UNITY_UINT)(286), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->right)), (

 ((void *)0)

 ), (UNITY_UINT)(287), UNITY_DISPLAY_STYLE_INT);

}

void test_leftRightRotate_given_7_5_6_expect_left_right_rotate_correctly() {



  rbtRoot = node7;



  setupRbtNode(node6, RED, 

                          ((void *)0)

                              , 

                                ((void *)0)

                                    );

  setupRbtNode(node5, RED, 

                          ((void *)0)

                              , node6);

  setupRbtNode(node7, RED, node5, 

                                 ((void *)0)

                                     );



  leftRightRotate(&rbtRoot);



  UnityAssertEqualNumber((UNITY_INT)((node6)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(308), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node5)), (UNITY_INT)((node6->left)), (

 ((void *)0)

 ), (UNITY_UINT)(309), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node7)), (UNITY_INT)((node6->right)), (

 ((void *)0)

 ), (UNITY_UINT)(310), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node5->left)), (

 ((void *)0)

 ), (UNITY_UINT)(311), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node5->right)), (

 ((void *)0)

 ), (UNITY_UINT)(312), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->left)), (

 ((void *)0)

 ), (UNITY_UINT)(313), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->right)), (

 ((void *)0)

 ), (UNITY_UINT)(314), UNITY_DISPLAY_STYLE_INT);



}

void test_leftRightRotate_given_50_55_60_65_70_expect_left_right_rotate_correctly() {



  rbtRoot = node70;



  setupRbtNode(node55, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node65, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node60, RED, node55, node65);

  setupRbtNode(node50, RED, 

                           ((void *)0)

                               , node60);

  setupRbtNode(node70, RED, node50, 

                                   ((void *)0)

                                       );



  leftRightRotate(&rbtRoot);



  UnityAssertEqualNumber((UNITY_INT)((node60)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(340), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node50)), (UNITY_INT)((node60->left)), (

 ((void *)0)

 ), (UNITY_UINT)(341), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node70)), (UNITY_INT)((node60->right)), (

 ((void *)0)

 ), (UNITY_UINT)(342), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node55)), (UNITY_INT)((node50->right)), (

 ((void *)0)

 ), (UNITY_UINT)(343), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node50->left)), (

 ((void *)0)

 ), (UNITY_UINT)(344), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node70->right)), (

 ((void *)0)

 ), (UNITY_UINT)(345), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node65)), (UNITY_INT)((node70->left)), (

 ((void *)0)

 ), (UNITY_UINT)(346), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->right)), (

 ((void *)0)

 ), (UNITY_UINT)(347), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->left)), (

 ((void *)0)

 ), (UNITY_UINT)(348), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node65->right)), (

 ((void *)0)

 ), (UNITY_UINT)(349), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node65->left)), (

 ((void *)0)

 ), (UNITY_UINT)(350), UNITY_DISPLAY_STYLE_INT);

}















void test_rbtAddNode_given_newNode_9_expect_add_9_into_tree_left_colour_RED_no_violation() {



  rbtRoot = node12;



  setupRbtNode(node12, BLACK, 

                             ((void *)0)

                                 , 

                                   ((void *)0)

                                       );



  rbtAddNode(&rbtRoot, node9);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(367), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(368), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(369), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(370), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(371), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(372), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(373), UNITY_DISPLAY_STYLE_INT);

}













void test_rbtAddNode_given_newNode_18_expect_add_18_into_tree_right_colour_RED_no_violation() {



  rbtRoot = node12;



  setupRbtNode(node9, RED, 

                          ((void *)0)

                              , 

                                ((void *)0)

                                    );

  setupRbtNode(node12, BLACK, node9, 

                                    ((void *)0)

                                        );



  rbtAddNode(&rbtRoot, node18);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(390), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(391), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(392), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(393), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(394), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(395), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(396), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(397), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(398), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(399), UNITY_DISPLAY_STYLE_INT);



}















void test_rbtAddNode_given_newNode_16_expect_add_16_into_tree_violation_properties_change_colour_of_the_previous_nodes_and_root() {



  rbtRoot = node12;



  setupRbtNode(node9, RED, 

                          ((void *)0)

                              , 

                                ((void *)0)

                                    );

  setupRbtNode(node18, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node12, BLACK, node9, node18);



  rbtAddNode(&rbtRoot, node16);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(419), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(420), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(421), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(422), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(423), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(424), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(425), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(426), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(427), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(428), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(429), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(430), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(431), UNITY_DISPLAY_STYLE_INT);

}

void test_rbtAddNode_given_newNode_15_expect_recolour_there_are_two_RED_in_the_tree_causing_properties_violation() {



  rbtRoot = node12;



  setupRbtNode(node16, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node18, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node9, BLACK, 

                            ((void *)0)

                                , 

                                  ((void *)0)

                                      );

  setupRbtNode(node17, BLACK, node16, node18);

  setupRbtNode(node12, BLACK, node9, node17);



  rbtAddNode(&rbtRoot, node15);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(455), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(456), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node17)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(457), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(458), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(459), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node15)), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(460), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(461), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node15->left)), (

 ((void *)0)

 ), (UNITY_UINT)(462), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node15->right)), (

 ((void *)0)

 ), (UNITY_UINT)(463), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(464), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(465), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(466), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(467), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(468), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(469), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(470), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(471), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(472), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node15->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(473), UNITY_DISPLAY_STYLE_INT);

}

void test_rbtAddNode_given_newNode_19_expect_recolour_there_are_two_RED_in_the_tree_causing_properties_violation() {



  rbtRoot = node12;



  setupRbtNode(node16, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node18, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node9, BLACK, 

                            ((void *)0)

                                , 

                                  ((void *)0)

                                      );

  setupRbtNode(node17, BLACK, node16, node18);

  setupRbtNode(node12, BLACK, node9, node17);



  rbtAddNode(&rbtRoot, node19);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(497), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(498), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node17)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(499), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(500), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(501), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node19)), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(502), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(503), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node19->left)), (

 ((void *)0)

 ), (UNITY_UINT)(504), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node19->right)), (

 ((void *)0)

 ), (UNITY_UINT)(505), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(506), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(507), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(508), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(509), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(510), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(511), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(512), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(513), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node19->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(514), UNITY_DISPLAY_STYLE_INT);

}

void test_rbtAddNode_given_newNode_55_expect_recolour_there_are_two_RED_in_the_tree_causing_properties_violation() {



  rbtRoot = node12;



  setupRbtNode(node18, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node60, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node9, BLACK, 

                            ((void *)0)

                                , 

                                  ((void *)0)

                                      );

  setupRbtNode(node50, BLACK, node18, node60);

  setupRbtNode(node12, BLACK, node9, node50);



  rbtAddNode(&rbtRoot, node55);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(538), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(539), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node50)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(540), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node50->left)), (

 ((void *)0)

 ), (UNITY_UINT)(541), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node60)), (UNITY_INT)((node50->right)), (

 ((void *)0)

 ), (UNITY_UINT)(542), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node55)), (UNITY_INT)((node60->left)), (

 ((void *)0)

 ), (UNITY_UINT)(543), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->right)), (

 ((void *)0)

 ), (UNITY_UINT)(544), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->left)), (

 ((void *)0)

 ), (UNITY_UINT)(545), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(546), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(547), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(548), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(549), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(550), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(551), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node50->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(552), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(553), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node60->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(554), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node55->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(555), UNITY_DISPLAY_STYLE_INT);

}

void test_rbtAddNode_given_newNode_17_expect_rotate_left_right_to_balance_the_tree_and_check_case_violation() {



  rbtRoot = node12;



  setupRbtNode(node16, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node9, BLACK, 

                            ((void *)0)

                                , 

                                  ((void *)0)

                                      );

  setupRbtNode(node18, RED, node16, 

                                   ((void *)0)

                                       );

  setupRbtNode(node12, BLACK, node9, node18);



  rbtAddNode(&rbtRoot, node17);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(579), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(580), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node17)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(581), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(582), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(583), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(584), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(585), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(586), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(587), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(588), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(589), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(590), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(591), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(592), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(593), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(594), UNITY_DISPLAY_STYLE_INT);

}

void test_rbtAddNode_given_newNode_19_expect_rotate_right_left_to_balance_the_tree_and_check_case_violation() {



  rbtRoot = node12;



  setupRbtNode(node20, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node9, BLACK, 

                            ((void *)0)

                                , 

                                  ((void *)0)

                                      );

  setupRbtNode(node18, BLACK, 

                             ((void *)0)

                                 , node20);

  setupRbtNode(node12, BLACK, node9, node18);



  rbtAddNode(&rbtRoot, node19);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(618), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(619), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node19)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(620), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node19->left)), (

 ((void *)0)

 ), (UNITY_UINT)(621), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node20)), (UNITY_INT)((node19->right)), (

 ((void *)0)

 ), (UNITY_UINT)(622), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(623), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(624), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node20->left)), (

 ((void *)0)

 ), (UNITY_UINT)(625), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node20->right)), (

 ((void *)0)

 ), (UNITY_UINT)(626), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(627), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(628), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(629), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(630), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node19->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(631), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(632), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node20->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(633), UNITY_DISPLAY_STYLE_INT);

}

void test_rbtAddNode_given_newNode_14_expect_recolour_and_rotate_right() {



  rbtRoot = node12;



  setupRbtNode(node15, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node18, BLACK, 

                             ((void *)0)

                                 , 

                                   ((void *)0)

                                       );

  setupRbtNode(node16, BLACK, node15, 

                                     ((void *)0)

                                         );

  setupRbtNode(node9, BLACK, 

                            ((void *)0)

                                , 

                                  ((void *)0)

                                      );

  setupRbtNode(node17, RED, node16, node18);

  setupRbtNode(node12, BLACK, node9, node17);



  rbtAddNode(&rbtRoot, node14);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(663), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(664), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node17)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(665), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node15)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(666), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(667), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node14)), (UNITY_INT)((node15->left)), (

 ((void *)0)

 ), (UNITY_UINT)(668), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node15->right)), (

 ((void *)0)

 ), (UNITY_UINT)(669), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node14->left)), (

 ((void *)0)

 ), (UNITY_UINT)(670), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node14->right)), (

 ((void *)0)

 ), (UNITY_UINT)(671), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(672), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(673), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(674), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(675), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(676), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(677), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(678), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(679), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(680), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(681), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node15->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(682), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(683), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node14->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(684), UNITY_DISPLAY_STYLE_INT);

}

void test_rbtAddNode_given_newNode_20_expect_recolour_and_rotate_left() {



  rbtRoot = node12;



  setupRbtNode(node19, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node16, BLACK, 

                             ((void *)0)

                                 , 

                                   ((void *)0)

                                       );

  setupRbtNode(node9, BLACK, 

                            ((void *)0)

                                , 

                                  ((void *)0)

                                      );

  setupRbtNode(node18, BLACK, 

                             ((void *)0)

                                 , node19);

  setupRbtNode(node17, RED, node16, node18);

  setupRbtNode(node12, BLACK, node9, node17);



  rbtAddNode(&rbtRoot, node20);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(713), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(714), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node17)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(715), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(716), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node19)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(717), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node19->left)), (

 ((void *)0)

 ), (UNITY_UINT)(718), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node20)), (UNITY_INT)((node19->right)), (

 ((void *)0)

 ), (UNITY_UINT)(719), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(720), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(721), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node20->left)), (

 ((void *)0)

 ), (UNITY_UINT)(722), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node20->right)), (

 ((void *)0)

 ), (UNITY_UINT)(723), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(724), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(725), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(726), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(727), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(728), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(729), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(730), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(731), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node19->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(732), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(733), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node20->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(734), UNITY_DISPLAY_STYLE_INT);

}

void test_rbtAddNode_given_newNode_55_expect_recolour_and_left_rotate_violation_two_adjacent_RED_nodes_in_the_tree() {



  rbtRoot = node12;



  setupRbtNode(node18, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node50, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node16, BLACK, 

                             ((void *)0)

                                 , 

                                   ((void *)0)

                                       );

  setupRbtNode(node20, BLACK, node18, node50);

  setupRbtNode(node9, BLACK, 

                            ((void *)0)

                                , 

                                  ((void *)0)

                                      );

  setupRbtNode(node17, RED, node16, node20);

  setupRbtNode(node12, BLACK, node9, node17);



  rbtAddNode(&rbtRoot, node55);



  UnityAssertEqualNumber((UNITY_INT)((node17)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(772), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(773), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(774), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(775), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node20)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(776), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node20->left)), (

 ((void *)0)

 ), (UNITY_UINT)(777), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node50)), (UNITY_INT)((node20->right)), (

 ((void *)0)

 ), (UNITY_UINT)(778), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node55)), (UNITY_INT)((node50->right)), (

 ((void *)0)

 ), (UNITY_UINT)(779), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->left)), (

 ((void *)0)

 ), (UNITY_UINT)(780), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->right)), (

 ((void *)0)

 ), (UNITY_UINT)(781), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node50->left)), (

 ((void *)0)

 ), (UNITY_UINT)(782), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(783), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(784), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(785), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(786), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(787), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(788), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(789), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(790), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(791), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(792), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node20->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(793), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(794), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node50->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(795), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node55->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(796), UNITY_DISPLAY_STYLE_INT);

}

void test_rbtAddNode_given_newNode_11_expect_recolour_and_left_rotate() {



  rbtRoot = node12;



  setupRbtNode(node10, RED, 

                           ((void *)0)

                               , 

                                 ((void *)0)

                                     );

  setupRbtNode(node18, BLACK, 

                             ((void *)0)

                                 , 

                                   ((void *)0)

                                       );

  setupRbtNode(node9, BLACK, 

                            ((void *)0)

                                , node10);

  setupRbtNode(node12, BLACK, node9, node18);



  rbtAddNode(&rbtRoot, node11);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(820), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node10)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(821), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(822), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(823), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(824), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node10->left)), (

 ((void *)0)

 ), (UNITY_UINT)(825), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node11)), (UNITY_INT)((node10->right)), (

 ((void *)0)

 ), (UNITY_UINT)(826), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(827), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node10->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(828), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(829), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(830), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node11->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(831), UNITY_DISPLAY_STYLE_INT);

}

void test_rbtAddNode_given_newNode_7_expect_recolour_and_right_rotate() {



  rbtRoot = node12;



  setupRbtNode(node8, RED, 

                          ((void *)0)

                              , 

                                ((void *)0)

                                    );

  setupRbtNode(node18, BLACK, 

                             ((void *)0)

                                 , 

                                   ((void *)0)

                                       );

  setupRbtNode(node9, BLACK, node8, 

                                   ((void *)0)

                                       );

  setupRbtNode(node12, BLACK, node9, node18);



  rbtAddNode(&rbtRoot, node7);



  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((rbtRoot)), (

 ((void *)0)

 ), (UNITY_UINT)(855), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node8)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(856), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node7)), (UNITY_INT)((node8->left)), (

 ((void *)0)

 ), (UNITY_UINT)(857), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node8->right)), (

 ((void *)0)

 ), (UNITY_UINT)(858), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(859), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->left)), (

 ((void *)0)

 ), (UNITY_UINT)(860), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->right)), (

 ((void *)0)

 ), (UNITY_UINT)(861), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(862), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(863), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(864), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(865), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(866), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node8->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(867), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(868), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node7->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(869), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(870), UNITY_DISPLAY_STYLE_INT);

}

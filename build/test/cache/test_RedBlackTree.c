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

 ), (UNITY_UINT)(141), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(142), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(143), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(144), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(145), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(166), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node50)), (UNITY_INT)((node60->left)), (

 ((void *)0)

 ), (UNITY_UINT)(167), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node70)), (UNITY_INT)((node60->right)), (

 ((void *)0)

 ), (UNITY_UINT)(168), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node50->left)), (

 ((void *)0)

 ), (UNITY_UINT)(169), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node50->right)), (

 ((void *)0)

 ), (UNITY_UINT)(170), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node70->left)), (

 ((void *)0)

 ), (UNITY_UINT)(171), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node70->right)), (

 ((void *)0)

 ), (UNITY_UINT)(172), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(196), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node20)), (UNITY_INT)((node30->left)), (

 ((void *)0)

 ), (UNITY_UINT)(197), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node35)), (UNITY_INT)((node30->right)), (

 ((void *)0)

 ), (UNITY_UINT)(198), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node15)), (UNITY_INT)((node20->left)), (

 ((void *)0)

 ), (UNITY_UINT)(199), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node25)), (UNITY_INT)((node20->right)), (

 ((void *)0)

 ), (UNITY_UINT)(200), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node15->left)), (

 ((void *)0)

 ), (UNITY_UINT)(201), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node15->right)), (

 ((void *)0)

 ), (UNITY_UINT)(202), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node25->left)), (

 ((void *)0)

 ), (UNITY_UINT)(203), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node25->right)), (

 ((void *)0)

 ), (UNITY_UINT)(204), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node35->left)), (

 ((void *)0)

 ), (UNITY_UINT)(205), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node35->right)), (

 ((void *)0)

 ), (UNITY_UINT)(206), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(224), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((node14->left)), (

 ((void *)0)

 ), (UNITY_UINT)(225), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node14->right)), (

 ((void *)0)

 ), (UNITY_UINT)(226), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(227), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(228), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(248), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node2)), (UNITY_INT)((node5->left)), (

 ((void *)0)

 ), (UNITY_UINT)(249), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node7)), (UNITY_INT)((node5->right)), (

 ((void *)0)

 ), (UNITY_UINT)(250), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node2->left)), (

 ((void *)0)

 ), (UNITY_UINT)(251), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node2->right)), (

 ((void *)0)

 ), (UNITY_UINT)(252), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->left)), (

 ((void *)0)

 ), (UNITY_UINT)(253), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->right)), (

 ((void *)0)

 ), (UNITY_UINT)(254), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(275), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node5)), (UNITY_INT)((node6->left)), (

 ((void *)0)

 ), (UNITY_UINT)(276), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node7)), (UNITY_INT)((node6->right)), (

 ((void *)0)

 ), (UNITY_UINT)(277), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node5->left)), (

 ((void *)0)

 ), (UNITY_UINT)(278), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node5->right)), (

 ((void *)0)

 ), (UNITY_UINT)(279), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->left)), (

 ((void *)0)

 ), (UNITY_UINT)(280), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node7->right)), (

 ((void *)0)

 ), (UNITY_UINT)(281), UNITY_DISPLAY_STYLE_INT);



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

 ), (UNITY_UINT)(307), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node50)), (UNITY_INT)((node60->left)), (

 ((void *)0)

 ), (UNITY_UINT)(308), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node70)), (UNITY_INT)((node60->right)), (

 ((void *)0)

 ), (UNITY_UINT)(309), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node55)), (UNITY_INT)((node50->right)), (

 ((void *)0)

 ), (UNITY_UINT)(310), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node50->left)), (

 ((void *)0)

 ), (UNITY_UINT)(311), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node70->right)), (

 ((void *)0)

 ), (UNITY_UINT)(312), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node65)), (UNITY_INT)((node70->left)), (

 ((void *)0)

 ), (UNITY_UINT)(313), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->right)), (

 ((void *)0)

 ), (UNITY_UINT)(314), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->left)), (

 ((void *)0)

 ), (UNITY_UINT)(315), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node65->right)), (

 ((void *)0)

 ), (UNITY_UINT)(316), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node65->left)), (

 ((void *)0)

 ), (UNITY_UINT)(317), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(334), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(335), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(336), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(337), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(338), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(339), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(340), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(357), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(358), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(359), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(360), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(361), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(362), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(363), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(364), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(365), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(366), UNITY_DISPLAY_STYLE_INT);



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

 ), (UNITY_UINT)(386), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(387), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(388), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(389), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(390), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(391), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(392), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(393), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(394), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(395), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(396), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(397), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(398), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(422), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(423), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node17)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(424), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(425), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(426), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node15)), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(427), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(428), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node15->left)), (

 ((void *)0)

 ), (UNITY_UINT)(429), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node15->right)), (

 ((void *)0)

 ), (UNITY_UINT)(430), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(431), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(432), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(433), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(434), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(435), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(436), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(437), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(438), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(439), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node15->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(440), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(464), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(465), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node17)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(466), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(467), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(468), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node19)), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(469), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(470), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node19->left)), (

 ((void *)0)

 ), (UNITY_UINT)(471), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node19->right)), (

 ((void *)0)

 ), (UNITY_UINT)(472), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(473), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(474), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(475), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(476), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(477), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(478), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(479), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(480), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node19->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(481), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(505), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(506), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node50)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(507), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node50->left)), (

 ((void *)0)

 ), (UNITY_UINT)(508), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node60)), (UNITY_INT)((node50->right)), (

 ((void *)0)

 ), (UNITY_UINT)(509), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node55)), (UNITY_INT)((node60->left)), (

 ((void *)0)

 ), (UNITY_UINT)(510), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->right)), (

 ((void *)0)

 ), (UNITY_UINT)(511), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->left)), (

 ((void *)0)

 ), (UNITY_UINT)(512), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(513), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(514), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(515), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(516), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(517), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(518), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node50->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(519), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(520), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node60->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(521), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node55->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(522), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(546), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(547), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node17)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(548), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(549), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(550), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(551), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(552), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(553), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(554), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(555), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(556), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(557), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(558), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(559), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(560), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(561), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(585), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(586), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node19)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(587), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node19->left)), (

 ((void *)0)

 ), (UNITY_UINT)(588), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node20)), (UNITY_INT)((node19->right)), (

 ((void *)0)

 ), (UNITY_UINT)(589), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(590), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(591), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node20->left)), (

 ((void *)0)

 ), (UNITY_UINT)(592), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node20->right)), (

 ((void *)0)

 ), (UNITY_UINT)(593), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(594), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(595), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(596), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(597), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node19->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(598), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(599), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node20->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(600), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(630), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(631), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node17)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(632), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node15)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(633), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(634), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node14)), (UNITY_INT)((node15->left)), (

 ((void *)0)

 ), (UNITY_UINT)(635), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node15->right)), (

 ((void *)0)

 ), (UNITY_UINT)(636), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node14->left)), (

 ((void *)0)

 ), (UNITY_UINT)(637), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node14->right)), (

 ((void *)0)

 ), (UNITY_UINT)(638), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(639), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(640), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(641), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(642), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(643), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(644), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(645), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(646), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(647), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(648), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node15->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(649), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(650), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node14->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(651), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(680), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(681), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node17)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(682), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(683), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node19)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(684), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node19->left)), (

 ((void *)0)

 ), (UNITY_UINT)(685), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node20)), (UNITY_INT)((node19->right)), (

 ((void *)0)

 ), (UNITY_UINT)(686), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(687), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(688), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node20->left)), (

 ((void *)0)

 ), (UNITY_UINT)(689), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node20->right)), (

 ((void *)0)

 ), (UNITY_UINT)(690), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(691), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(692), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(693), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(694), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(695), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(696), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(697), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(698), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node19->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(699), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(700), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node20->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(701), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(739), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node12)), (UNITY_INT)((node17->left)), (

 ((void *)0)

 ), (UNITY_UINT)(740), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(741), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node16)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(742), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node20)), (UNITY_INT)((node17->right)), (

 ((void *)0)

 ), (UNITY_UINT)(743), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node20->left)), (

 ((void *)0)

 ), (UNITY_UINT)(744), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node50)), (UNITY_INT)((node20->right)), (

 ((void *)0)

 ), (UNITY_UINT)(745), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node55)), (UNITY_INT)((node50->right)), (

 ((void *)0)

 ), (UNITY_UINT)(746), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->left)), (

 ((void *)0)

 ), (UNITY_UINT)(747), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node55->right)), (

 ((void *)0)

 ), (UNITY_UINT)(748), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node50->left)), (

 ((void *)0)

 ), (UNITY_UINT)(749), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(750), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(751), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->left)), (

 ((void *)0)

 ), (UNITY_UINT)(752), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node9->right)), (

 ((void *)0)

 ), (UNITY_UINT)(753), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->left)), (

 ((void *)0)

 ), (UNITY_UINT)(754), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node16->right)), (

 ((void *)0)

 ), (UNITY_UINT)(755), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node17->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(756), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(757), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(758), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node16->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(759), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node20->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(760), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(761), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node50->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(762), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node55->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(763), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(787), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node10)), (UNITY_INT)((node12->left)), (

 ((void *)0)

 ), (UNITY_UINT)(788), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node18)), (UNITY_INT)((node12->right)), (

 ((void *)0)

 ), (UNITY_UINT)(789), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->left)), (

 ((void *)0)

 ), (UNITY_UINT)(790), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((

 ((void *)0)

 )), (UNITY_INT)((node18->right)), (

 ((void *)0)

 ), (UNITY_UINT)(791), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node9)), (UNITY_INT)((node10->left)), (

 ((void *)0)

 ), (UNITY_UINT)(792), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((node11)), (UNITY_INT)((node10->right)), (

 ((void *)0)

 ), (UNITY_UINT)(793), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node12->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(794), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node10->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(795), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((BLACK)), (UNITY_INT)((node18->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(796), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node9->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(797), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((RED)), (UNITY_INT)((node11->colour)), (

 ((void *)0)

 ), (UNITY_UINT)(798), UNITY_DISPLAY_STYLE_INT);

}

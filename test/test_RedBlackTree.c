#include "unity.h"
#include "RedBlackTree.h"

RbtNode* createNode(int data, RbtColour colour, RbtNode* left, RbtNode* right);
RbtNode* rbtRoot;
RbtNode* node2, *node5, *node6, *node7, *node8, *node9, *node10, *node11, *node12; 
RbtNode* node14, *node15, *node16, *node17, *node18, *node19, *node20, *node25, *node30;
RbtNode* node35, *node50, *node55, *node60, *node65, *node70;  
int firstTime = 1;

void setUp(void){
  if(firstTime) { 
    node2 = createNode(2, RED, NULL, NULL);
    node5 = createNode(5, RED, NULL, NULL);
    node6 = createNode(6, RED, NULL, NULL);
    node7 = createNode(7, RED, NULL, NULL);
    node8 = createNode(8, RED, NULL, NULL);
    node9 = createNode(9, RED, NULL, NULL);
    node10 = createNode(10, RED, NULL, NULL);
    node11 = createNode(11, RED, NULL, NULL);
    node12 = createNode(12, RED, NULL, NULL);
    node14 = createNode(14, RED, NULL, NULL);
    node15 = createNode(15, RED, NULL, NULL);
    node16 = createNode(16, RED, NULL, NULL);
    node17 = createNode(17, RED, NULL, NULL);
    node18 = createNode(18, RED, NULL, NULL);
    node19 = createNode(19, RED, NULL, NULL);
    node20 = createNode(20, RED, NULL, NULL);
    node25 = createNode(25, RED, NULL, NULL);
    node30 = createNode(30, RED, NULL, NULL);
    node35 = createNode(35, RED, NULL, NULL);
    node50 = createNode(50, RED, NULL, NULL);
    node55 = createNode(55, RED, NULL, NULL);
    node60 = createNode(60, RED, NULL, NULL);
    node65 = createNode(65, RED, NULL, NULL);
    node70 = createNode(70, RED, NULL, NULL);
    firstTime = 0;
  }
}

void resetRbtNode(RbtNode* node) {
  node->left = NULL;
  node->right = NULL;
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


/*void test_RedBlackTree_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement RedBlackTree");
}
*/


RbtNode* createNode(int data, RbtColour colour, RbtNode* left, RbtNode* right) {
  RbtNode* newNode = rbtCreateNode(data);
  newNode->colour = colour;
  newNode->left = left;
  newNode->right = right;
  return newNode;
}



/*
        50                 15
        /                 /  \
      15     =====>      7   50
      /     rotate
    7       right
*/

void test_rightRotate_given_100_50_10_expect_correct_rotation() {
  // root node
  rbtRoot = node50;
  
  setupRbtNode(node7, RED, NULL, NULL);
  setupRbtNode(node15, RED, node7, NULL);
  setupRbtNode(node50, RED, node15, NULL);
 
  rightRotate(&rbtRoot);
  
  TEST_ASSERT_EQUAL(node15, rbtRoot);
  TEST_ASSERT_EQUAL(node7, node15->left);
  TEST_ASSERT_EQUAL(node50, node15->right);
  TEST_ASSERT_EQUAL(NULL, node7->left);
  TEST_ASSERT_EQUAL(NULL, node7->right);
  TEST_ASSERT_EQUAL(NULL, node50->left);
  TEST_ASSERT_EQUAL(NULL, node50->right);
}

/*
        50                          15
       / \                         /  \
      15 55    ============>      10  50
     / \       rotate right          /  \
   10  14                           14  55
*/

void test_rightRotate_given_50_15_55_10_14_expect_right_rotate() {
  // root node 
  rbtRoot = node50;
  
  setupRbtNode(node10, RED, NULL, NULL);
  setupRbtNode(node14, RED, NULL, NULL);
  setupRbtNode(node15, RED, node10, node14);
  setupRbtNode(node55, RED, NULL, NULL);
  setupRbtNode(node50, RED, node15, node55);
  
  rightRotate(&rbtRoot);
  
  TEST_ASSERT_EQUAL(node15, rbtRoot);
  TEST_ASSERT_EQUAL(node10, node15->left);
  TEST_ASSERT_EQUAL(node50, node15->right);
  TEST_ASSERT_EQUAL(node14, node50->left);
  TEST_ASSERT_EQUAL(node55, node50->right);
  TEST_ASSERT_EQUAL(NULL, node14->left);
  TEST_ASSERT_EQUAL(NULL, node14->right);
  TEST_ASSERT_EQUAL(NULL, node55->left);
  TEST_ASSERT_EQUAL(NULL, node55->right);
  TEST_ASSERT_EQUAL(NULL, node10->left);
  TEST_ASSERT_EQUAL(NULL, node10->right);
}

/*
    18                 9
   /     ======>      / \
  9      rotate    NULL 18
          right
*/

void test_rightRotate_given_18_9_expect_correct_rotation() {
  // root node 
  rbtRoot = node18;
  
  setupRbtNode(node9, RED, NULL, NULL);
  setupRbtNode(node18, RED, node9, NULL);
  
  rightRotate(&rbtRoot);
  
  TEST_ASSERT_EQUAL(node9, rbtRoot);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(node18, node9->right);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
}

/*
    50                      60
      \                    /  \
      60       ==>       50   70
        \      rotate
        70    left
*/

void test_leftRotation_given_50_60_70_expect_left_rotation() {
  // root node 
  rbtRoot = node50;
  
  setupRbtNode(node70, RED, NULL, NULL);
  setupRbtNode(node60, RED, NULL, node70);
  setupRbtNode(node50, RED, NULL, node60);
  
  leftRotate(&rbtRoot);
  
  TEST_ASSERT_EQUAL(node60, rbtRoot);
  TEST_ASSERT_EQUAL(node50, node60->left);
  TEST_ASSERT_EQUAL(node70, node60->right);
  TEST_ASSERT_EQUAL(NULL, node50->left);
  TEST_ASSERT_EQUAL(NULL, node50->right);
  TEST_ASSERT_EQUAL(NULL, node70->left);
  TEST_ASSERT_EQUAL(NULL, node70->right);
}
/*
    20                          30
   /  \                        / \
  15  30      ===========>    20 35
     / \      left rotate    / \
    25 35                   15 25


*/

void test_leftRotate_given_node_20_15_30_25_35_expect_left_rotate() {
  // root node 
  rbtRoot = node20;
  
  setupRbtNode(node25, RED, NULL, NULL);
  setupRbtNode(node35, RED, NULL, NULL);
  setupRbtNode(node15, RED, NULL, NULL);
  setupRbtNode(node30, RED, node25, node35);
  setupRbtNode(node20, RED, node15, node30);
  
  leftRotate(&rbtRoot);
  
  TEST_ASSERT_EQUAL(node30, rbtRoot);
  TEST_ASSERT_EQUAL(node20, node30->left);
  TEST_ASSERT_EQUAL(node35, node30->right);
  TEST_ASSERT_EQUAL(node15, node20->left);
  TEST_ASSERT_EQUAL(node25, node20->right);
  TEST_ASSERT_EQUAL(NULL, node15->left);
  TEST_ASSERT_EQUAL(NULL, node15->right);
  TEST_ASSERT_EQUAL(NULL, node25->left);
  TEST_ASSERT_EQUAL(NULL, node25->right);
  TEST_ASSERT_EQUAL(NULL, node35->left);
  TEST_ASSERT_EQUAL(NULL, node35->right);
}

/*
     12                     14
       \        ===>       /  \
       14                12  NULL

*/
void test_leftRotation_given_12_and_14_expect_left_rotation() {
  // root node
  rbtRoot = node12;
  
  setupRbtNode(node14, RED, NULL, NULL);
  setupRbtNode(node12, RED, NULL, node14);
  
  leftRotate(&rbtRoot);
  
  TEST_ASSERT_EQUAL(node14, rbtRoot);
  TEST_ASSERT_EQUAL(node12, node14->left);
  TEST_ASSERT_EQUAL(NULL, node14->right);
  TEST_ASSERT_EQUAL(NULL, node12->left);
  TEST_ASSERT_EQUAL(NULL, node12->right);
}

/*
    2               2                     5
     \               \                   / \
     7     ===>       5        ===>     2  7
    /     right        \      left
   5      rotate       7      rotate
*/
void test_rightLeftRotate_given_2_7_5_expect_right_left_rotate_correctly() {
  // root node
  rbtRoot = node2;
  
  setupRbtNode(node5, RED, NULL, NULL);
  setupRbtNode(node7, RED, node5, NULL);
  setupRbtNode(node2, RED, NULL, node7);
  
  rightLeftRotate(&rbtRoot);
  
  TEST_ASSERT_EQUAL(node5, rbtRoot);
  TEST_ASSERT_EQUAL(node2, node5->left);
  TEST_ASSERT_EQUAL(node7, node5->right);
  TEST_ASSERT_EQUAL(NULL, node2->left);
  TEST_ASSERT_EQUAL(NULL, node2->right);
  TEST_ASSERT_EQUAL(NULL, node7->left);
  TEST_ASSERT_EQUAL(NULL, node7->right);
}

/*
    7                7                6
   /                /                / \
  5      ===>      6       ===>     5  7
   \     left     /       right
    6   rotate   5        rotate
*/

void test_leftRightRotate_given_7_5_6_expect_left_right_rotate_correctly() {
  //root node
  rbtRoot = node7;
  
  setupRbtNode(node6, RED, NULL, NULL);
  setupRbtNode(node5, RED, NULL, node6);
  setupRbtNode(node7, RED, node5, NULL);
  
  leftRightRotate(&rbtRoot);
  
  TEST_ASSERT_EQUAL(node6, rbtRoot);
  TEST_ASSERT_EQUAL(node5, node6->left);
  TEST_ASSERT_EQUAL(node7, node6->right);
  TEST_ASSERT_EQUAL(NULL, node5->left);
  TEST_ASSERT_EQUAL(NULL, node5->right);
  TEST_ASSERT_EQUAL(NULL, node7->left);
  TEST_ASSERT_EQUAL(NULL, node7->right);
  
}

/*
      70
     /                           60
    50        =====>           /   \
      \       left-right      50   70
      60      rotate           \   /
     /  \                      55 65
    55  65
*/ 

void test_leftRightRotate_given_50_55_60_65_70_expect_left_right_rotate_correctly() {
  //root node
  rbtRoot = node70;
  
  setupRbtNode(node55, RED, NULL, NULL);
  setupRbtNode(node65, RED, NULL, NULL);
  setupRbtNode(node60, RED, node55, node65);
  setupRbtNode(node50, RED, NULL, node60);
  setupRbtNode(node70, RED, node50, NULL);
  
  leftRightRotate(&rbtRoot);
  
  TEST_ASSERT_EQUAL(node60, rbtRoot);
  TEST_ASSERT_EQUAL(node50, node60->left);
  TEST_ASSERT_EQUAL(node70, node60->right);
  TEST_ASSERT_EQUAL(node55, node50->right);
  TEST_ASSERT_EQUAL(NULL, node50->left);
  TEST_ASSERT_EQUAL(NULL, node70->right);
  TEST_ASSERT_EQUAL(node65, node70->left);
  TEST_ASSERT_EQUAL(NULL, node55->right);
  TEST_ASSERT_EQUAL(NULL, node55->left);
  TEST_ASSERT_EQUAL(NULL, node65->right);
  TEST_ASSERT_EQUAL(NULL, node65->left);
}

/*
    12(B)   ===>      12(B)
            Add      /
            9(R)   9(R)

*/
void test_rbtAddNode_given_newNode_9_expect_add_9_into_tree_left_colour_RED_no_violation() {
  // root node 
  rbtRoot = node12;

  setupRbtNode(node12, BLACK, NULL, NULL);
  
  rbtAddNode(&rbtRoot, node9);
  
  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node9, node12->left);
  TEST_ASSERT_EQUAL(NULL, node12->right);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(RED, node9->colour);
}
/*
    12(B)                 12(B)
   /         ===>        /   \
 9(R)        Add       9(R)  18(R)
             18(R)
*/
void test_rbtAddNode_given_newNode_18_expect_add_18_into_tree_right_colour_RED_no_violation() {
  // root node
  rbtRoot = node12;
  
  setupRbtNode(node9, RED, NULL, NULL);
  setupRbtNode(node12, BLACK, node9, NULL);
  
  rbtAddNode(&rbtRoot, node18);
  
  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node9, node12->left);
  TEST_ASSERT_EQUAL(node18, node12->right);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(RED, node9->colour);
  TEST_ASSERT_EQUAL(RED, node18->colour);
  
}
/*
      12(B)                 12(B)                12(B)
     /    \     ====>      /    \      ====>    /    \
   9(R)  18(R)   Add    9(R)   18(R)          9(B)  18(B)
                 16(R)         /                     /
                             16(R)                 16(R)
*/
void test_rbtAddNode_given_newNode_16_expect_add_16_into_tree_violation_properties_change_colour_of_the_previous_nodes_and_root() {
  // root node 
  rbtRoot = node12;
  
  setupRbtNode(node9, RED, NULL, NULL);
  setupRbtNode(node18, RED, NULL, NULL);
  setupRbtNode(node12, BLACK, node9, node18);
  
  rbtAddNode(&rbtRoot, node16);
  
  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node9, node12->left);
  TEST_ASSERT_EQUAL(node18, node12->right);
  TEST_ASSERT_EQUAL(node16, node18->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(NULL, node16->left);
  TEST_ASSERT_EQUAL(NULL, node16->right);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(BLACK, node9->colour);
  TEST_ASSERT_EQUAL(BLACK, node18->colour);
  TEST_ASSERT_EQUAL(RED, node16->colour);
}

/*
    12(B)                         12(B)                            12(B)
   /    \                        /    \                           /    \
  9(B) 17(B)      ==========>  9(B)  17(B)        ========>     9(B)  17(R)
       /   \      Add 15(R)          /   \        recolour           /    \
    16(R) 18(R)                    16(R) 18(R)                    16(B)   18(B)
                                   /                              /
                                15(R)                           15(R)
*/
void test_rbtAddNode_given_newNode_15_expect_recolour_there_are_two_RED_in_the_tree_causing_properties_violation() {
  // root node
  rbtRoot = node12;
  
  setupRbtNode(node16, RED, NULL, NULL);
  setupRbtNode(node18, RED, NULL, NULL);
  setupRbtNode(node9, BLACK, NULL, NULL);
  setupRbtNode(node17, BLACK, node16, node18);
  setupRbtNode(node12, BLACK, node9, node17);
  
  rbtAddNode(&rbtRoot, node15);
  
  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node9, node12->left);
  TEST_ASSERT_EQUAL(node17, node12->right);
  TEST_ASSERT_EQUAL(node16, node17->left);
  TEST_ASSERT_EQUAL(node18, node17->right);
  TEST_ASSERT_EQUAL(node15, node16->left);
  TEST_ASSERT_EQUAL(NULL, node16->right);
  TEST_ASSERT_EQUAL(NULL, node15->left);
  TEST_ASSERT_EQUAL(NULL, node15->right);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(BLACK, node9->colour);
  TEST_ASSERT_EQUAL(RED, node17->colour);
  TEST_ASSERT_EQUAL(BLACK, node16->colour);
  TEST_ASSERT_EQUAL(BLACK, node18->colour);
  TEST_ASSERT_EQUAL(RED, node15->colour);
}

/*
    12(B)                         12(B)                            12(B)
   /    \                        /    \                           /    \
  9(B) 17(B)      ==========>  9(B)  17(B)        ========>     9(B)  17(R)
       /   \      Add 19(R)          /   \        recolour           /    \
    16(R) 18(R)                    16(R) 18(R)                    16(B)   18(B)
                                          \                                \
                                         19(R)                            19(R)
*/
void test_rbtAddNode_given_newNode_19_expect_recolour_there_are_two_RED_in_the_tree_causing_properties_violation() {
  // root node
  rbtRoot = node12;
  
  setupRbtNode(node16, RED, NULL, NULL);
  setupRbtNode(node18, RED, NULL, NULL);
  setupRbtNode(node9, BLACK, NULL, NULL);
  setupRbtNode(node17, BLACK, node16, node18);
  setupRbtNode(node12, BLACK, node9, node17);
  
  rbtAddNode(&rbtRoot, node19);
  
  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node9, node12->left);
  TEST_ASSERT_EQUAL(node17, node12->right);
  TEST_ASSERT_EQUAL(node16, node17->left);
  TEST_ASSERT_EQUAL(node18, node17->right);
  TEST_ASSERT_EQUAL(node19, node18->right);
  TEST_ASSERT_EQUAL(NULL, node16->right);
  TEST_ASSERT_EQUAL(NULL, node19->left);
  TEST_ASSERT_EQUAL(NULL, node19->right);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(BLACK, node9->colour);
  TEST_ASSERT_EQUAL(RED, node17->colour);
  TEST_ASSERT_EQUAL(BLACK, node16->colour);
  TEST_ASSERT_EQUAL(BLACK, node18->colour);
  TEST_ASSERT_EQUAL(RED, node19->colour);
}

/*
    12(B)                         12(B)                            12(B)
   /    \                        /    \                           /    \
  9(B) 50(B)      ==========>  9(B)  50(B)        ========>     9(B)  50(R)
       /   \      Add 55(R)          /   \        recolour           /    \
    18(R) 60(R)                    18(R) 60(R)                    18(B)   60(B)
                                         /                                /
                                       55(R)                            55(R)
*/
void test_rbtAddNode_given_newNode_55_expect_recolour_there_are_two_RED_in_the_tree_causing_properties_violation() {
  // root node
  rbtRoot = node12;
  
  setupRbtNode(node18, RED, NULL, NULL);
  setupRbtNode(node60, RED, NULL, NULL);
  setupRbtNode(node9, BLACK, NULL, NULL);
  setupRbtNode(node50, BLACK, node18, node60);
  setupRbtNode(node12, BLACK, node9, node50);
  
  rbtAddNode(&rbtRoot, node55);
  
  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node9, node12->left);
  TEST_ASSERT_EQUAL(node50, node12->right);
  TEST_ASSERT_EQUAL(node18, node50->left);
  TEST_ASSERT_EQUAL(node60, node50->right);
  TEST_ASSERT_EQUAL(node55, node60->left);
  TEST_ASSERT_EQUAL(NULL, node55->right);
  TEST_ASSERT_EQUAL(NULL, node55->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(BLACK, node9->colour);
  TEST_ASSERT_EQUAL(RED, node50->colour);
  TEST_ASSERT_EQUAL(BLACK, node18->colour);
  TEST_ASSERT_EQUAL(BLACK, node60->colour);
  TEST_ASSERT_EQUAL(RED, node55->colour);
}
/*
      12(B)                 12(B)                        12(B)                        12(B)
     /    \     ====>      /    \      =========>       /    \    ==========>        /    \
   9(B)  18(B)   Add    9(B)   18(B)   recolour       9(B)  18(B)    rotate        9(B)  17(B)
          /      17(R)         /                             /     left-right            /   \
       16(R)                  16(R)                        16(R)                      16(R) 18(R)
                               \                             \
                              17(R)                         17(B)

*/

void test_rbtAddNode_given_newNode_17_expect_rotate_left_right_to_balance_the_tree_and_check_case_violation() {
  // root node
  rbtRoot = node12;
  
  setupRbtNode(node16, RED, NULL, NULL);
  setupRbtNode(node9, BLACK, NULL, NULL);
  setupRbtNode(node18, RED, node16, NULL);
  setupRbtNode(node12, BLACK, node9, node18);
  
  rbtAddNode(&rbtRoot, node17);

  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node9, node12->left);
  TEST_ASSERT_EQUAL(node17, node12->right);
  TEST_ASSERT_EQUAL(node16, node17->left);
  TEST_ASSERT_EQUAL(node18, node17->right);
  TEST_ASSERT_EQUAL(NULL, node16->left);
  TEST_ASSERT_EQUAL(NULL, node16->right);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(BLACK, node9->colour);
  TEST_ASSERT_EQUAL(BLACK, node17->colour);
  TEST_ASSERT_EQUAL(RED, node18->colour);
  TEST_ASSERT_EQUAL(RED, node16->colour);
}

/*
      12(B)                           12(B)                    12(B)                      12(B)
     /    \         =========>        /   \       =======>    /    \     ===========>    /   \
   9(B)  18(B)      Add 19(R)       9(B) 18(B)    recolour  9(B)  18(B)    rotate      9(B)  19(B)
           \                               \                         \     right-left        /  \
          20(R)                           20(R)                     20(R)                 18(R) 20(R)
                                          /                          /
                                        19(R)                      19(B)

*/
void test_rbtAddNode_given_newNode_19_expect_rotate_right_left_to_balance_the_tree_and_check_case_violation() {
  // root node
  rbtRoot = node12;
  
  setupRbtNode(node20, RED, NULL, NULL);
  setupRbtNode(node9, BLACK, NULL, NULL);
  setupRbtNode(node18, BLACK, NULL, node20);
  setupRbtNode(node12, BLACK, node9, node18);
  
  rbtAddNode(&rbtRoot, node19);
  
  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node9, node12->left);
  TEST_ASSERT_EQUAL(node19, node12->right);
  TEST_ASSERT_EQUAL(node18, node19->left);
  TEST_ASSERT_EQUAL(node20, node19->right);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
  TEST_ASSERT_EQUAL(NULL, node20->left);
  TEST_ASSERT_EQUAL(NULL, node20->right);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(BLACK, node9->colour);
  TEST_ASSERT_EQUAL(BLACK, node19->colour);
  TEST_ASSERT_EQUAL(RED, node18->colour);
  TEST_ASSERT_EQUAL(RED, node20->colour);
}



/*
     12(B)                          12(B)                             12(B)
    /    \                         /    \                            /    \
  9(B)  17(R)       =========>   9(B)  17(R)         =========>    9(B)  17(R)
       /    \       add node14        /    \        recolour &           /   \
     16(B)  18(B)                   16(B) 18(B)     right rotate      15(B)  18(B)
     /                             /                                 /   \
   15(R)                         15(R)                             14(R) 16(R)
                                 /
                              14(R)
*/

void test_rbtAddNode_given_newNode_14_expect_recolour_and_rotate_right() {
  // root node
  rbtRoot = node12;
  
  setupRbtNode(node15, RED, NULL, NULL);
  setupRbtNode(node18, BLACK, NULL, NULL);
  setupRbtNode(node16, BLACK, node15, NULL);
  setupRbtNode(node9, BLACK, NULL, NULL);
  setupRbtNode(node17, RED, node16, node18);
  setupRbtNode(node12, BLACK, node9, node17);
  
  rbtAddNode(&rbtRoot, node14);
  
  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node9, node12->left);
  TEST_ASSERT_EQUAL(node17, node12->right);
  TEST_ASSERT_EQUAL(node15, node17->left);
  TEST_ASSERT_EQUAL(node18, node17->right);
  TEST_ASSERT_EQUAL(node14, node15->left);
  TEST_ASSERT_EQUAL(node16, node15->right);
  TEST_ASSERT_EQUAL(NULL, node14->left);
  TEST_ASSERT_EQUAL(NULL, node14->right);
  TEST_ASSERT_EQUAL(NULL, node16->left);
  TEST_ASSERT_EQUAL(NULL, node16->right);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(BLACK, node9->colour);
  TEST_ASSERT_EQUAL(RED, node17->colour); 
  TEST_ASSERT_EQUAL(BLACK, node18->colour);
  TEST_ASSERT_EQUAL(BLACK, node15->colour);
  TEST_ASSERT_EQUAL(RED, node16->colour);
  TEST_ASSERT_EQUAL(RED, node14->colour);
}

/*
      12(B)                         12(B)                               12(B)
      /   \                         /   \                              /    \
    9(B) 17(R)        ========>   9(B) 17(R)         ===========>    9(B)  17(R)
         /  \        add node20        /   \         recolour &           /   \
      16(B) 18(B)                   16(B) 18(B)      left rotate        16(B) 19(B)
              \                             \                                /   \
              19(R)                        19(R)                          18(R) 20(R)
                                             \
                                            20(R)
            
*/

void test_rbtAddNode_given_newNode_20_expect_recolour_and_rotate_left() {
  // root node 
  rbtRoot = node12;
  
  setupRbtNode(node19, RED, NULL, NULL);
  setupRbtNode(node16, BLACK, NULL, NULL);
  setupRbtNode(node9, BLACK, NULL, NULL);
  setupRbtNode(node18, BLACK, NULL, node19);
  setupRbtNode(node17, RED, node16, node18);
  setupRbtNode(node12, BLACK, node9, node17);
  
  rbtAddNode(&rbtRoot, node20);
  
  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node9, node12->left);
  TEST_ASSERT_EQUAL(node17, node12->right);
  TEST_ASSERT_EQUAL(node16, node17->left);
  TEST_ASSERT_EQUAL(node19, node17->right);
  TEST_ASSERT_EQUAL(node18, node19->left);
  TEST_ASSERT_EQUAL(node20, node19->right);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
  TEST_ASSERT_EQUAL(NULL, node20->left);
  TEST_ASSERT_EQUAL(NULL, node20->right);
  TEST_ASSERT_EQUAL(NULL, node16->left);
  TEST_ASSERT_EQUAL(NULL, node16->right);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(BLACK, node9->colour);
  TEST_ASSERT_EQUAL(RED, node17->colour);
  TEST_ASSERT_EQUAL(BLACK, node16->colour);
  TEST_ASSERT_EQUAL(BLACK, node19->colour);
  TEST_ASSERT_EQUAL(RED, node18->colour);
  TEST_ASSERT_EQUAL(RED, node20->colour);
}

/*
            12(B)                               12(B)
            /   \                              /    \
         9(B)  17(R)          ==========>   9(B)   17(R)
               /   \          add node55           /   \
            16(B) 20(B)                         16(B) 20(B)
                  /   \                               /   \
               18(R) 50(R)                         18(R) 50(R)
                                                            \
                                                           55(R)
                                                           
                        12(B)                                 17(B)
  ============>        /   \            ========>            /     \
  recolouring        9(B) 17(R)         recolour &        12(R)    20(R)
                          /  \          left rotate      /   \     /    \
                       16(B) 20(R)                    9(B)  16(B) 18(B) 50(B)
                             /  \                                         \
                          18(B) 50(B)                                    55(R)
                                  \
                                  55(R)
*/
void test_rbtAddNode_given_newNode_55_expect_recolour_and_left_rotate_violation_two_adjacent_RED_nodes_in_the_tree() {
  // root node 
  rbtRoot = node12;
  
  setupRbtNode(node18, RED, NULL, NULL);
  setupRbtNode(node50, RED, NULL, NULL);
  setupRbtNode(node16, BLACK, NULL, NULL);
  setupRbtNode(node20, BLACK, node18, node50);
  setupRbtNode(node9, BLACK, NULL, NULL);
  setupRbtNode(node17, RED, node16, node20);
  setupRbtNode(node12, BLACK, node9, node17);
  
  rbtAddNode(&rbtRoot, node55);
  
  TEST_ASSERT_EQUAL(node17, rbtRoot);
  TEST_ASSERT_EQUAL(node12, node17->left);
  TEST_ASSERT_EQUAL(node9, node12->left);
  TEST_ASSERT_EQUAL(node16, node12->right);
  TEST_ASSERT_EQUAL(node20, node17->right);
  TEST_ASSERT_EQUAL(node18, node20->left);
  TEST_ASSERT_EQUAL(node50, node20->right);
  TEST_ASSERT_EQUAL(node55, node50->right);
  TEST_ASSERT_EQUAL(NULL, node55->left);
  TEST_ASSERT_EQUAL(NULL, node55->right);
  TEST_ASSERT_EQUAL(NULL, node50->left);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(NULL, node16->left);
  TEST_ASSERT_EQUAL(NULL, node16->right);
  TEST_ASSERT_EQUAL(BLACK, node17->colour);
  TEST_ASSERT_EQUAL(RED, node12->colour);
  TEST_ASSERT_EQUAL(BLACK, node9->colour);
  TEST_ASSERT_EQUAL(BLACK, node16->colour);
  TEST_ASSERT_EQUAL(RED, node20->colour);
  TEST_ASSERT_EQUAL(BLACK, node18->colour);
  TEST_ASSERT_EQUAL(BLACK, node50->colour);
  TEST_ASSERT_EQUAL(RED, node55->colour);
}

/*
          12(B)                   12(B)                                 12(B)
         /    \       =====>     /    \       =================>        /   \
       9(B)  18(B)   add 11(R)  9(B)  18(B)    recolour &             10(B) 18(B)
         \                       \             left rotate           /   \
        10(R)                   10(R)                               9(R) 11(R)
                                   \
                                  11(R)

*/
void test_rbtAddNode_given_newNode_11_expect_recolour_and_left_rotate() {
  // root node
  rbtRoot = node12;
  
  setupRbtNode(node10, RED, NULL, NULL);
  setupRbtNode(node18, BLACK, NULL, NULL);
  setupRbtNode(node9, BLACK, NULL, node10);
  setupRbtNode(node12, BLACK, node9, node18);
  
  rbtAddNode(&rbtRoot, node11);
  
  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node10, node12->left);
  TEST_ASSERT_EQUAL(node18, node12->right);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
  TEST_ASSERT_EQUAL(node9, node10->left);
  TEST_ASSERT_EQUAL(node11, node10->right);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(BLACK, node10->colour);
  TEST_ASSERT_EQUAL(BLACK, node18->colour);
  TEST_ASSERT_EQUAL(RED, node9->colour);
  TEST_ASSERT_EQUAL(RED, node11->colour);
}

/*
       12(B)                      12(B)                           12(B)
      /   \                       /   \                          /    \
    9(B)  18(B)    =========>   9(B) 18(B)    ============>    8(B)  18(B)
    /              add node7    /             recolour &      /   \
   8(R)                        8(R)           right rotate   7(R) 9(R)
                               /
                              7(R)
*/

void test_rbtAddNode_given_newNode_7_expect_recolour_and_right_rotate() {
  // root node 
  rbtRoot = node12;
  
  setupRbtNode(node8, RED, NULL, NULL);
  setupRbtNode(node18, BLACK, NULL, NULL);
  setupRbtNode(node9, BLACK, node8, NULL);
  setupRbtNode(node12, BLACK, node9, node18);
  
  rbtAddNode(&rbtRoot, node7);
  
  TEST_ASSERT_EQUAL(node12, rbtRoot);
  TEST_ASSERT_EQUAL(node8, node12->left);
  TEST_ASSERT_EQUAL(node7, node8->left);
  TEST_ASSERT_EQUAL(node9, node8->right);
  TEST_ASSERT_EQUAL(node18, node12->right);
  TEST_ASSERT_EQUAL(NULL, node7->left);
  TEST_ASSERT_EQUAL(NULL, node7->right);
  TEST_ASSERT_EQUAL(NULL, node9->left);
  TEST_ASSERT_EQUAL(NULL, node9->right);
  TEST_ASSERT_EQUAL(NULL, node18->left);
  TEST_ASSERT_EQUAL(NULL, node18->right);
  TEST_ASSERT_EQUAL(BLACK, node12->colour);
  TEST_ASSERT_EQUAL(BLACK, node8->colour);
  TEST_ASSERT_EQUAL(BLACK, node18->colour);
  TEST_ASSERT_EQUAL(RED, node7->colour);
  TEST_ASSERT_EQUAL(RED, node9->colour);
}

    






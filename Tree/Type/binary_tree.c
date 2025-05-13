#include <stdio.h>
#include <stdlib.h>


// Binary tree is type of tree where each node has at most two children.

struct TreeNode{
    char iData;
    struct TreeNode* ptLeft;
    struct TreeNode* ptRight;
};

// function to create a new node
struct TreeNode* fnCreateNewNode (char iData)
{
    struct TreeNode* ptNewNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    ptNewNode -> iData = iData;
    ptNewNode -> ptLeft = NULL;
    ptNewNode -> ptRight = NULL;

    return ptNewNode;
}

// exampale for making a whole tree u8sing this fucntion
int main(void)
{
    // first declare all the node
    struct TreeNode* ndRoot = fnCreateNewNode('R');
    struct TreeNode* ndNodeA = fnCreateNewNode('a');
    struct TreeNode* ndNodeB = fnCreateNewNode('b');
    struct TreeNode* ndNodeC = fnCreateNewNode('c');
    struct TreeNode* ndNodeD = fnCreateNewNode('d');
    struct TreeNode* ndNodeE = fnCreateNewNode('e');
    struct TreeNode* ndNodeF = fnCreateNewNode('f');

    // then we set the connection between node
    ndRoot -> ptLeft = ndNodeA;
    ndRoot -> ptRight = ndNodeB;

    ndNodeA -> ptLeft = ndNodeC;
    ndNodeA -> ptRight = ndNodeD;

    ndNodeB -> ptLeft = ndNodeE;
    ndNodeB -> ptRight = ndNodeF;

    // the tree will look like this
    /* 
          R
         / \
        a   b
       / \ / \
      c  d e  f
    */

    // says we wanbt to print the node D from the root, we can access it like this
    printf("The data in node D is: %c\n", ndRoot -> ptLeft -> ptRight -> iData);


    free(ndRoot);
    free(ndNodeA);
    free(ndNodeB);
    free(ndNodeC);
    free(ndNodeD);
    free(ndNodeE);
    free(ndNodeF);


    return 0;
}
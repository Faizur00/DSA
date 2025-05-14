#include <stdio.h>
#include <stdlb.h>

// this one is a litle bit complicated, 
// pls read the 'avl tree.md' to know more about this one 


// this is our tree data structure
// as we can see, we got one more parameter (height)
struct TreeNode{
    char cData;
    struct TreeNode* ptLeft;
    struct TreeNode* ptRight;
    int iHeight;
};


// function to find the max between two integer
// we will use this function to find the max height of the left and right subtrees
int fnMax(int iFirstInt, int iSecondInt)
{
    return (iFirstInt > iSecondInt) ? iFirstInt : iSecondInt;
}

/
int fnGetHeight(struct TreeNode* ptNode)
{
    if(ptNode == NULL){
        return -1;
    }

    return ptNode->iHeight;
}

// function to find the height of the tree
struct TreeNode* fnCreateNewNode(struct Node* cData) 
{
    struct TreeNode* ptNewNode = (struct TreeNode* )malloc(sizeof(struct TreeNode));
    
    if (ptNewNode == NULL) {
        printf("failed to create new node\n");
        return NULL;
    }

    ptNewNode -> cData = cData;
    ptNewNode -> ptLeft = NULL;
    ptNewNode -> ptRight = NULL;
    ptNewNode -> iHeight = 1;
    return ptNewNode;
}

// function to right rotate the tree
// says we got an imbalnced tree like this
/*
         X
        / \
       y   z
      / \
     T1  T2
*/
// and we want to make right rotation
struct TreeNode* fnRotateRight(struct TreeNode* X ) 
{
    // we need to assign the left child of X to y
    // and the right child of y to T2
    // because we need to make sure that the right child of y is not NULL
    // since after the rotation, y will be the new root of the subtree
    struct TreeNode* y = X -> ptLeft;
    struct TreeNode* T2 = X -> ptRight;

    // now we can perform the rotation
    y -> ptRight = X;
    X -> ptLeft = T2;

    return y;
}

// function to left rotate the tree
// says we got an imbalnced tree like this

struct TreeNode* fnRotateLeft(struct TreeNode* X ) 
{
    // we need to assign the right child of X to y
    // and the left child of y to T2
    // because we need to make sure that the left child of y is not NULL
    // since after the rotation, y will be the new root of the subtree
    struct TreeNode* y = X -> ptRight;
    struct TreeNode* T2 = y -> ptLeft;

    // now we can perform the rotation
    y -> ptLeft = X;
    X -> ptRight = T2;

    return y;
}


// get balanced factor of a node

int fnGetBalamce(struct TreeNode* ptNode)
{
    if (ptNode == NULL){
        return 0;
    }    

    return iHeight(ptNode -> ptLeft) - iHeight(ptNode -> ptRight);
}


// function to insert a new node in the tree
// the insert function will be called recursively
// and we will use the height of the tree to find the balance factor

struct TreeNode* fnInsertNode (struct TreeNode* ptNode, char cDataToInsert)
{
    // perform normal BST insert
    if (ptNode == NULL){
        return (fnCreateNewNode(cDataToInsert));
    }

    
}







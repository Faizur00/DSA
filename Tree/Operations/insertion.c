#include <stdio.h>
#include <stdlib.h>

struct TreeNode{
    int iData;
    struct TreeNode* ptLeft;
    struct TreeNode* ptRight;
};

struct TreeNode* fnCreateNewNode(int iDataToInsert){
    struct TreeNode* ptNewNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (ptNewNode == NULL){
        printf("failed to allocate new node\n");
        return NULL;
    }

    ptNewNode -> iData = iDataToInsert;
    ptNewNode -> ptLeft = NULL;
    ptNewNode -> ptRight = NULL;


    return ptNewNode;
}


struct TreeNode* fnInsertNode(struct TreeNode* ptTreeNode, int iDataToInsert){
    
    if (ptTreeNode == NULL){
        return fnCreateNewNode(iDataToInsert);
    }

    // create a queue to traverse the tree
    struct TreeNode* pQueue[100];
    int front = 0;
    int rear = 0;
    pQueue[rear++] = ptTreeNode;

    while (front < rear){
        struct TreeNode* ptTmpNode = pQueue[front++];

        // case if the left child is empty
        if (ptTmpNode -> ptleft == NULL){
            ptTmpNode -> ptLeft = fnCreateNewNode(iDataToInsert);
        }
        else{
            pQueue[rear++] = ptTmpNode -> ptLeft;
        }
        
        // case if the right child is empty
        if (ptTmpNode -> ptRight == NULL){
            ptTmpNode -> ptRight = fnCreateNewNode(iDataToInsert);
            break;
        }
        else{
            pQueue[rear++] = ptTmpNode -> ptRight;
        }   
    }

    return ptTreeNode;
}


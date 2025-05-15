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


// since in normal binary tree there is no rule like in BFS, we need traversal algorithm to do searching
// this can be perform using DFS/BFS search

// DFS-searching algorithm example
void fnDfsSearch(struct TreeNode* ptNode, int iTargetValue) {

    if (ptNode == NULL){
        return 0;
    }

    if (root->data == value) {
        return 1;
    }

    int iLeftRes = fnDfsSearch(ptNode -> ptleft, iTargetValue);
    int iRightRes = fnPreOrderDFS(ptNode -> ptRight, iTargetValue);
    
    return iLeftRes||iRightRes;
}


int main(void) {
    struct TreeNode* ptRoot = fnCreateNewNode(1);
    ptRoot -> ptLeft = fnCreateNewNode(2);
    ptRoot -> ptRight = fnCreateNewNode(3);
    ptRoot -> ptLeft -> ptLeft = fnCreateNewNode(4);
    ptRoot -> ptLeft -> ptRight = fnCreateNewNode(5);

    int iTargetValue = 5;
    if (fnDfsSearch(ptRoot, iTargetValue)) {
        printf("Value %d found in the tree.\n", iTargetValue);
    } else {
        printf("Value %d not found in the tree.\n", iTargetValue);
    }
    
    // Free the allocated memory
    free(ptRoot -> ptLeft -> ptLeft);
    free(ptRoot -> ptLeft -> ptRight);
    free(ptRoot -> ptLeft);
    free(ptRoot -> ptRight);
    free(ptRoot);
    return 0;
}
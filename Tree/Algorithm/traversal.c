// type of binary tree traversal:


// DFS traversal: explores as far down a branch as possible before backtracking.
// Preorder Traversal (current-left-right): Visits the node first, then left subtree, then right subtree.
// Inorder Traversal (left-current-right): Visits left subtree, then the node, then the right subtree.
// Postorder Traversal (left-right-current): Visits left subtree, then right subtree, then the node.-
struct TreeNode{
    int iData;
    struct TreeNode* ptLeft;
    struct TrreNode* ptRight:
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

// Pre-order DFS: Root, Left, Right
void fnPreOrderDFS(struct TreeNode* ptNode) {
    if (ptNode == NULL){
        return;
    }
    printf("data: %i \n", ptNode -> iData);
    fnPreOrderDFS(ptNode -> ptleft);
    fnPreOrderDFS(ptNode -> ptRight);
}

// In-order DFS: Left, Root, Right
void fnInOrderDFS(struct TreeNode* ptNode) {
    if (ptNode == NULL){
        return;
    }

    fnInOrderDFS(ptNode -> ptLeft);
    printf("data: %i \n", ptNode -> iData);
    fnInOrderDFS(ptNode -> ptRight);
}

void postOrderDFS(struct TreeNode* ptNode){
    if (node == NULL) {
        return;
    }
    postOrderDFS(ptNode -> ptLeft);
    postOrderDFS(ptNode -> ptRight);
    printf("%d ", ptNode -> iData);
}


// BFS: Level order traversal
void fnBFSTraversal(struct TreeNode* ptNode) {
    if (ptNode == NULL){
        return;
    }

    // since in C we dont have a built in queue, we need to make our own queue
    // we can use a circular queue to make it easier
    struct TreeNode* Queue[100];
    int pFront = 0;
    int pRear = 0;

    // enqueue the root node
    queue[pRear++] = ptNode;

    while (pFront < pRear) {
        // dequeue the front node
        struct TreeNode* ptCurrentNode = queue[pFront++];
        printf("data: %i \n", ptCurrentNode -> iData);

        // enqueue left child
        if (ptCurrentNode -> ptLeft != NULL){
            queue[pRear++] = ptCurrentNode -> ptLeft;
        }

        // enqueue right child
        if (ptCurrentNode -> ptRight != NULL){
            queue[pRear++] = ptCurrentNode -> ptRight;
        }
    }
}




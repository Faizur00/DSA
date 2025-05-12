// Definiing a single linked list
struct Node {
    int iData;
    struct Node* ptNext;
};
// so you can imagine the linked list is like thi [the data][ptr]--> [the data][ptr]---> [the data][ptr]---> NULL



// function to create a new node
struct Node* fnCreateNode(int iData) //this mean the function create a new node and return us the pointer to the new node
{
    struct Node* ptNewNode = (struct Node*)malloc(sizeof(struct Node));
    // this part is to allocate memory for the new node

    if (ptNewNode == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    // this part is to check if the memory allocation is successful

    ptNewNode->iData = iData; // this part is to assign the data to the new node
    ptNewNode->ptNext = NULL; // this part is to assign the next pointer to NULL
    return ptNewNode;
}


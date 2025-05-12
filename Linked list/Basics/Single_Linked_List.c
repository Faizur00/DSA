#include <stdio.h>
#include <stdlib.h>

// Definiing a single linked list
struct Node {
    int iData;
    struct Node* ptNext;
};
// so you can imagine the linked list is like thi [the data][ptr]--> [the data][ptr]---> [the data][ptr]---> NULL



// function to create a new node
struct Node* fnCreateNode(int iNewData) //this mean the function create a new node and return us the pointer to the new node
{
    // create a new node
    struct Node* ptNewNode =  (struct Node*)malloc(sizeof(struct Node));
    if(ptNewNode == NULL){
        print("failed to allocated memory");
        return NULL;
    }

    ptNewNode -> iData = iNewData;
    ptNewnode -> ptNext = NULL;

    return ptNewNode
}
// this function will only create the head of the node
// to create the rest of the node we need to use the next function




// Linked List Traversal
// just like in array, in Linked list we can traverse the list
// by using a pointer to the first node and then moving to the next node until we reach the end of the list
void fnLinkedListTraversal(struct Node* ptNode)
{
    // check if the list is empty and do early return
    if (ptNode == NULL) {
        printf("The list is empty\n");
        return;
    }

    // traverse the list
    while (ptNode != NULL) {
        // print the data of the current node
        printf("%i ", ptNode -> data);

        // move to the next node
        ptNode = ptNode -> ptNext;
    }
    printf("\n");
}

// Searching in Single Linked List
// basically the way to search in a linked list is the same as in an array
// we just need to traverse the list and check if the data is equal to the data we are looking for

bool fnSearchInLinkedList(struct Node* ptNode, int iTarget)
{
    // check if the list is empty and do early return
    if (ptNode == NULL) {
        printf("The list is empty\n");
        return -1;
    }

    // traverse the list
    while (ptNode != NULL) {
        // check if the data is equal to the data we are looking for
        if (ptNode -> iData == iTarget) {
            return 1; // found
        }
        // move to the next node
        ptNode = ptNode -> ptNext;
    }
    return 0; // not found
}

// or we can use recursion to search in a linked list
bool fnSearchInLinkedListRecursion(struct Node* ptNode, int iTarget)
{
    // check if the list is empty and do early return
    if (ptNode == NULL) {
        printf("The list is empty\n");
        return -1;
    }

    // check if the data is equal to the data we are looking for
    if (ptNode -> iData == iTarget) {
        return 1; // found
    }
    // move to the next node
    return fnSearchInLinkedListRecursion(ptNode -> ptNext, iTarget);
}

// basicailly to count the lengt of linked list we just need to traverse the list and count the number of nodes
int fnCountLengthOfLinkedList(struct Node* ptNode)
{
    // check if the list is empty and do early return
    if (ptNode == NULL) {
        printf("The list is empty\n");
        return -1;
    }

    // count the number of nodes
    int iCount = 0;
    while (ptNode != NULL) {
        iCount++;
        ptNode = ptNode -> ptNext;
    }
    return iCount;
}

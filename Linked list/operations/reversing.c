#include <stdio.h>
#include <stdlib.h>

struct Node{
    int iData;
    struct Node* ptNext;
};


struct Node* fnMakeNewNode(int iData)
{
    struct Node* ptNewNode =(struct Node*)malloc(sizeof(struct Node));
    if (ptNewNode == NULL){
        printf("failed to allocated memory");
        return NULL;
    }

    ptNewNode -> iData = iData;
    ptNewNode -> ptNext = NULL;

    return ptNewNode;
}

// 3 ways to reversing a linked list:
// iterative way
// recursion way
// stack way



// iterative apporach to reverse a linked list
// the idea is using 3 pointers to track different node (prev, curr, next)
struct Node* fnReverseLinkedList(struct Node* ptOldLinkedList)
{
    // first we declare our helper pointer (were using l,c,r for this one to not make confusion since pointer name for the node is also next)
    struct Node* ptLeft, *ptMid,*ptRight;
    ptLeft = NULL;
    ptMid = ptOldLinkedList;


    while (ptMid != NULL){

        // settings the postion of the trhee pointer
        ptRight = ptMid -> ptNext;
        ptMid -> Next = ptLeft;
        
        // now basically the left ptr is still at NULL
        // the mid ptr is pointing at left while in the first node
        // and the right ptr is on the second node po inting at the next
        // so get the idea?, our pointing position is change from: [1]->[2]->[3]->[4]
        // to this: NULL<-[] []->[]->[]
        // now we just shift it till the end of the list

        ptleft = ptMid;
        ptMid = ptRight; //since the right ptr is depends on the mid ptr, so it gonna shifted also
    }

    // then were just gonna return the reversed old linkedlist 
    return ptLeft;
}






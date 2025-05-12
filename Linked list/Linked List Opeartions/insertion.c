// says we got a linked list:
struct Node{
    int iData;
    struct Node* ptNext;
};

// and the function to create a new node
struct Node* fnCreateNewNode(int iNewData)
{
    struct Node* ptNewNode = (struct Node*)malloc(sizeof(struct Node))
    if (ptNewNode == NULL);{
        print("failed to allocate memory");
        return NULL;
    }

    ptNewNode -> iData = iNewData;
    ptNext -> ptNext = NULL;

    return ptNewNode;
}

// insertion at the beginning of linked list
// basically were gonna make a new node and attach the old linked list after it
struct Node* fnInsertAtFirst(struct Node* ptOldLinkedList, int iDataToInsert)
{
    // we make a new linked list head
    struct Node* ptNewNode = fnCreateNewNode(iDataToInsert);

    // then set the pointer on the linked list to the head of out old linked list
    ptNewNode -> ptNext = ptOldLinkedList;

    return NewNode;
}

// insertion at the end of linked list
// for this operations we need to store our old linked list in tmp variable
struct Node* fnAppendAtLast(struct Node* ptOldLinkedList, int iDataToAppend)
{
    // we make a new node based on the new data first
    struct Node* ptNewNode = fnCreateNewNode(iDataToAppend);

    // check if the old Linkend list is empty or no, return early if yes
    if(ptOldLinkedList == NULL){
        return ptNewNode;
    }

    // store our old linked list to a tmp var
    struct Node* tmp =  ptOldLinkedList;

    // traverse to the last node
    while (tmp -> ptNext != NULL){
        tmp = tmp -> ptNext;
    }

    //hook the last node with our new node
    tmp -> ptNext = ptNewNode;
    
    //return our oldLinkedList
    return ptOldLinkedList; 
}


// insertion at the spesific palce at linked list
// this one is a litle bit tricky
// basically we need to cut off the linked list at the index that we want,
// connect it to our new node,
// and connect the new node to the rest of linked list

struct Node* fnInsertAtPos(struct Node* ptOldLinkedList, int iDataToInsert, int iTargetPos)
{
    // return early if invalid target pos
    if (iTargetPos < 1){
        return ptOldLinkedList;
    }

    // special case if  pos == 1, we're basically just doing insert at the first position
    if (iTargetPos == 1){
        struct Node *ptNewNode = fnCreateNewNode(iDataToInsert);
        ptNewNode->next = head;
        return newNode;
    }


    // create a third node to help us store the first part of our linked list
    struct Node* ptThirdNode =  ptOldLinkedList;


    //traverse trhough the third node untill the current pos
    for(int i = 1; i < iTargetPos - 1 && ptThirdNode != NULL; i ++){
        ptThirdNode = ptThirdNode -> ptNext;
    }

    // another protection handle
    if (ptThirdNode == NULL){
        return ptOldLinkedList;
    }

    // the swap part begin here

    // first we create the node based on the data that we want to insert
    struct Node* ptNewNode = fnCreateNewNode(iDataToInsert);
    // then we make the new node point to the third position of next after traversal
    ptNewNode -> ptNext = ptThirdNode -> Next;
    // now we make the thirdnode pointitng to the newnode
    ptThirdNode -> ptNext = ptNewNode;

    return ptOldLinkedList;
}
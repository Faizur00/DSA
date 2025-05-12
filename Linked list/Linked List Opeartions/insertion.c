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

    // store our 






}
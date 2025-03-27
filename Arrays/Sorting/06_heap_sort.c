#include <stdio.h>

// Swap funciton so its easier to tell what the heck is goin on
void fnSwap(int* iFirstInteger, int* iSecondInteger)
{
    int iTmp;
    iTmp = *iFirstInteger;
    *iFirstInteger = *iSecondInteger;
    *iSecondInteger = iTmp;
}

// this function is a process function that ensures
// that the binary tree is following the heap property
void fnHeapify(int aiArr[], int iRootIndex, int iArrSize)
{
    // Assume iRootIndex is the root of a subtree.
    // Find iRootIndex's left child: left = 2*iRootIndex + 1
    int iLeftChild = 2 * iRootIndex + 1;
    // Find iRootIndex's right child: right = 2*iRootIndex + 2
    int iRightChild = 2 * iRootIndex + 2;

    // Initialize the largest as the root (iRootIndex).
    int ipLargest = iRootIndex;

    if (iLeftChild < iArrSize && aiArr[iLeftChild] > aiArr[ipLargest]) {
        ipLargest = iLeftChild;
    }

    if (iRightChild < iArrSize && aiArr[iRightChild] > aiArr[ipLargest]) {
        ipLargest = iRightChild;
    }

    if (iRootIndex != ipLargest) {
        fnSwap(&aiArr[iRootIndex], &aiArr[ipLargest]);
        // Recursively heapify the affected subtree.
        fnHeapify(aiArr, ipLargest, iArrSize);
    }
}

// function to make max heap from an array
void fnBuildMaxHeap(int aiArr[], int iArrSize)
{
    // HOW?: find the non-leaf node,
    // then do heapify from bottom to top

    // the formula to finding the last node non leaf is:
    // last_non_leaf = n / 2 - 1, where n is array size
    int iLastNonLeaf = iArrSize / 2 - 1;

    for (int i = iLastNonLeaf; i >= 0; i--){
        fnHeapify(aiArr, i, iArrSize);
    }
}

void fnHeapSort (int aiArr[], int iArrSize)
{
    // Build max heap from the array.
    fnBuildMaxHeap(aiArr, iArrSize);

    // One by one extract elements from the heap.
    for (int i = iArrSize - 1; i >= 0; i--) {
        // Move current root to end.
        fnSwap(&aiArr[0], &aiArr[i]);
        // Call max heapify on the reduced heap.
        fnHeapify(aiArr, 0, i);
    }
}


void fnPrintArray(int aiArr[], int iArrSize)
{
    for (int i = 0; i < iArrSize; i++) {
        printf("%d ", aiArr[i]);
    }
    printf("\n");
}


int main(void)
{
    int aiArr[] = {12, 11, 13, 5, 6, 7};
    int iArrSize = sizeof(aiArr) / sizeof(aiArr[0]);
    printf("Original array: \n");
    fnPrintArray(aiArr, iArrSize);

    fnHeapSort(aiArr, iArrSize);
    printf("Sorted array: \n");
    fnPrintArray(aiArr, iArrSize);
    // Heap sort is in-place and not stable.
    // Time complexity: O(n log n) in all cases.
    // Space complexity: O(1) for in-place sorting.
    // but it is not stable.
    // It is not a stable sort because it does not preserve the relative order of equal elements.
    // This is because the heap property does not guarantee that equal elements will remain in the same order as they were in the original array.
    // In a heap, the order of equal elements is not preserved during the heapification process.
    // As a result, when the heap is sorted, the equal elements may end up in a different order than they were in the original array.
    // This is what makes heap sort an unstable sorting algorithm.
    // In contrast, stable sorting algorithms like merge sort or bubble sort do preserve the relative order of equal elements.
    // This is because they ensure that equal elements are not swapped or moved in a way that changes their relative order.
    // In summary, heap sort is not stable because the heap property does not guarantee the preservation of the relative order of equal elements during the sorting process.
    return 0;
}
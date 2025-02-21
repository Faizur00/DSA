#include <stdio.h>

void fnMakeHeap(int aiArr[], int iArrSize, int iRoot)
{
    // intialize largest for the root
    int iLargest = iRoot;

    // initialize the left index
    int iLeftIdx = 2 * iRoot + 1;

    // intialize the right index
    int iRightIdx = 2 * iRoot + 2;

    if (iLeftIdx < iArrSize && aiArr[iLeftIdx] > aiArr[iLargest]){
        aiArr[iLargest] = iLeftIdx;
    }

    if (iRightIdx < iArrSize && aiArr[iRightIdx] > aiArr[iLargest]){
        aiArr[iLargest] = iRightIdx;
    }

        


}
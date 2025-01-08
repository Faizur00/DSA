#include <stdio.h>

int fnTernarySearch(int iSearchedValue, int iArraySize, int aiArr[])
{
    int iLeft = 0;
    int iRight = iArraySize - 1;

    while (iLeft <= iRight){
        int iMid1 = iLeft + (iRight - iLeft) / 3;
        int iMid2 = iRight - (iRight - iLeft) / 3;

        if (iSearchedValue == aiArr[iMid1]){
            return iMid1;
        }
        else if (iSearchedValue == aiArr[iMid2]){
            return iMid2;
        }


        if (iSearchedValue < aiArr[iMid1]){
            iRight = iMid1 - 1;
        }
        else if (iSearchedValue > aiArr[iMid2]){
            iLeft = iMid2 + 1;
        }
        else{
            iLeft = iMid1 + 1;
            iRight = iMid2 - 1;
        }
    }
    return -1;
}



int main(void)
{
    // Define an array of integers
    int aiArr[] = {1, 3, 4, 7, 9, 11, 13, 17, 19, 23, 27, 31, 35, 39, 43, 47, 51, 55, 59, 63};
    // Define the value we want to search for in the array
    int iValue = 23;
    // Calculate the number of elements in the array
    int iArraySize = sizeof(aiArr) / sizeof(aiArr[0]);

    // Call the linear search function and store the result in iPosition
    int iPosition = fnTernarySearch(iValue, iArraySize, aiArr);
    // Check if the value was found
    if (iPosition == -1){
        // If not found, print a message
        printf("Value not found\n");
    }
    else{
        // If found, print the value and its index
        printf("Value %i found at index %i \n", iValue, iPosition); 
    }
    return 0;
}
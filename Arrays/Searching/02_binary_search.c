/**
 * @file 02_binary_search.c
 * @brief This file contains an implementation of the binary search algorithm in C.
 *
 * Binary search is an efficient algorithm for finding an item from a sorted list of items.
 * It works by repeatedly dividing in half the portion of the list that could contain the item,
 * until you've narrowed down the possible locations to just one.
 *
 * The function `fnBinarySearch` performs a binary search on a sorted array of integers.
 *
 * @param iSearchedValue The value to search for in the array.
 * @param iArraySize The number of elements in the array.
 * @param aiArr The array of integers to search within.
 * @return The index of the searched value if found, otherwise -1.
 *
 * The `main` function demonstrates the usage of the `fnBinarySearch` function by searching for a value
 * in a predefined array and printing the result.
 */
#include <stdio.h>

int fnBinarySearch(int iSearchedValue, int iArraySize, int aiArr[])
{   
    int iLeft = 0;
    int iRight = iArraySize - 1;

    while (iLeft <= iRight){
        int iMid = (iLeft+iRight)/2;

        if (aiArr[iMid] < iSearchedValue){
            iLeft = iMid + 1;
        }
        else if (aiArr[iMid] > iSearchedValue) {
            iRight = iMid - 1;
        } else {
            return iMid;
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
    int iPosition = fnBinarySearch(iValue, iArraySize, aiArr);
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
/**
 * @file 02_selection_sort.c
 * @brief This file contains an implementation of the Selection Sort algorithm in C.
 *
 * Selection Sort is a simple sorting algorithm that divides the input list into two parts:
 * the sublist of items already sorted, which is built up from left to right at the front (left) of the list,
 * and the sublist of items remaining to be sorted that occupy the rest of the list.
 * Initially, the sorted sublist is empty and the unsorted sublist is the entire input list.
 * The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element
 * from the unsorted sublist, swapping it with the leftmost unsorted element (putting it in sorted order),
 * and moving the sublist boundaries one element to the right.
 *
 * The time complexity of Selection Sort is O(n^2) in all cases, where n is the number of items being sorted.
 * This makes it inefficient for large datasets, but it is simple to understand and implement.
 *
 * The functions included in this file are:
 * - fcSwap: A helper function to swap two integers.
 * - fnSelectionSort: The function that performs the Selection Sort on an array.
 * - main: The main function that demonstrates the usage of the Selection Sort function.
 *
 * Example usage:
 * @code
 * int aiArray[] = {64, 25, 12, 22, 11};
 * int iArraySize = sizeof(aiArray) / sizeof(aiArray[0]);
 * fnSelectionSort(iArraySize, aiArray);
 * @endcode
 */
#include <stdio.h>

int fnSwap(int *iNum1, int *iNum2)
{
    int iTemp = *iNum1;
    *iNum1 = *iNum2;
    *iNum2 = iTemp;
}

int* fnselection_sort(int iArraySize, int aiArr[])
{
    for (int i = 0; i < iArraySize - 1; i++){
        int iMinIndex = i;
        for (int j = i + 1; j < iArraySize; j++){
            if (aiArr[j] < aiArr[iMinIndex]){
                iMinIndex = j;
            }
        }
        if (iMinIndex != i){
            fnSwap(&aiArr[i], &aiArr[iMinIndex]);
        }
    }
    return aiArr;
}


int main(void)
{
    int aiArray[] = {64, 34, 25, 12, 22, 11, 90, 5, 45, 78, 23, 56, 89, 67, 32, 99, 18, 77, 54, 31};
    int iArraySize = sizeof(aiArray) / sizeof(aiArray[0]);

    printf("Unsorted array: \n");
    for (int i = 0; i < iArraySize; i++) {
        printf("%d ", aiArray[i]);
    }
    printf("\n");

    fnselection_sort(iArraySize, aiArray);

    printf("Sorted array in ascending order: \n");
    for (int i = 0; i < iArraySize; i++) {
        printf("%d ", aiArray[i]);
    }
    printf("\n");
}
/**
 * @file 01_bubble_sort.c
 * @brief This file contains an implementation of the Bubble Sort algorithm in C.
 *
 * Bubble Sort is a simple sorting algorithm that repeatedly steps through the list,
 * compares adjacent elements and swaps them if they are in the wrong order. The pass
 * through the list is repeated until the list is sorted. The algorithm gets its name
 * because smaller elements "bubble" to the top of the list.
 *
 * The time complexity of Bubble Sort is O(n^2) in the worst and average cases, where
 * n is the number of items being sorted. This makes it inefficient for large datasets,
 * but it is simple to understand and implement.
 *
 * The functions included in this file are:
 * - fcSwap: A helper function to swap two integers.
 * - fnBubbleSort: The function that performs the Bubble Sort on an array.
 * - main: The main function that demonstrates the usage of the Bubble Sort function.
 *
 * Example usage:
 * @code
 * int aiArray[] = {64, 34, 25, 12, 22, 11, 90};
 * int iArraySize = sizeof(aiArray) / sizeof(aiArray[0]);
 * fnBubbleSort(iArraySize, aiArray);
 * @endcode
 */
#include <stdio.h>

void fcSwap(int *iFirstInteger, int *iSecondInteger)
{
    int iTmp;
    iTmp = *iFirstInteger;
    *iFirstInteger = *iSecondInteger;
    *iSecondInteger = iTmp;
}

int* fnBubbleSort(int iArraySize, int aiArr[])
{
    for (int i = 0; i < iArraySize - 1; i++){
        for (int j = 0; j < iArraySize - i - 1; j++){
            if (aiArr[j] > aiArr[j+1]){
                fcSwap(&aiArr[j], &aiArr[j+1]);
            }
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

    fnBubbleSort(iArraySize, aiArray);

    printf("Sorted array in ascending order: \n");
    for (int i = 0; i < iArraySize; i++) {
        printf("%d ", aiArray[i]);
    }
    printf("\n");
}
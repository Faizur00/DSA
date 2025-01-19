#include <stdio.h>

int* fnInsertionSort(int aiArr[], int iArraySize)
{
    int i, j, iKey;
    for (i = 1; i < iArraySize; i++){
        iKey = aiArr[i];
        j = i - 1;
        while (j >= 0 && aiArr[j] > iKey){
            aiArr[j + 1] = aiArr[j];
            j = j - 1;
        }
        aiArr[j + 1] = iKey;
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

    fnInsertionSort(aiArray, iArraySize);

    printf("Sorted array in ascending order: \n");
    for (int i = 0; i < iArraySize; i++) {
        printf("%d ", aiArray[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

void fnSwap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int fnPartition(int aiArr[], int iLow, int iHigh)
{
    int iPivot = aiArr[iHigh];
    int iLeftPtr = iLow - 1;

    for (int i = iLow; i < iHigh; i++) {
        if (aiArr[i] < iPivot) {
            iLeftPtr++;
            fnSwap(&aiArr[iLeftPtr], &aiArr[i]);
        }
    }

    fnSwap(&aiArr[iLeftPtr + 1], &aiArr[iHigh]);
    return iLeftPtr + 1;
}

void fnQuickSort(int aiArr[], int iLow, int iHigh)
{
    if (iLow < iHigh) {
        int iPartitionIndex = fnPartition(aiArr, iLow, iHigh);

        fnQuickSort(aiArr, iLow, iPartitionIndex - 1);
        fnQuickSort(aiArr, iPartitionIndex + 1, iHigh);
    }
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

    fnQuickSort(aiArray, 0, iArraySize - 1);

    printf("Sorted array in ascending order: \n");
    for (int i = 0; i < iArraySize; i++) {
        printf("%d ", aiArray[i]);
    }
    printf("\n");

    return 0;
}


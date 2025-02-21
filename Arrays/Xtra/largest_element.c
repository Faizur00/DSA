#include <stdio.h>

int fnFindLargest(int aiArr[], int iArrSize)
{
    int iLocalMax = aiArr[0];

    for (int i = 0; i < iArrSize; i++){
        if (aiArr[i] > iLocalMax){
            iLocalMax = aiArr[i];
        }
    }

    return iLocalMax;
}

int main(void)
{
    int aiArray[] = {12, 11, 13, 5, 6, 7, 1921, 3, 8, 151, 2, 10, 14, 1, 4, 9, 18, 17, 16, 20, 241};
    int iArraySize = sizeof(aiArray) / sizeof(aiArray[0]);

    printf("Given array is \n");
    for (int i = 0; i < iArraySize; i++){
        printf("%d ", aiArray[i]);
    }
    printf("\n");

    printf("Max Value on the Array is: ");
    printf("%d", fnFindLargest(aiArray, iArraySize));
    printf("\n");

    return 0;
}
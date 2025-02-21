#include <stdio.h>

void fnAlter(int aiArr[], int iArrSize)
{
    for (int i = 0; i < iArrSize; i += 2){
        printf("%d ", aiArr[i]);
    }
}

int main(void)
{
    int aiArray[] = {12, 11, 13, 5, 6, 7, 19, 3, 8, 15, 2, 10, 14, 1, 4, 9, 18, 17, 16, 20,241};
    int iArrSize = sizeof(aiArray) / sizeof(aiArray[0]);

    printf("Given array is \n");
    for (int i = 0; i < iArrSize; i++){
        printf("%d ", aiArray[i]);
    }
    printf("\n");

    printf("Alternate elements are: ");
    printf("\n");

    fnAlter(aiArray, iArrSize);
    printf("\n");

    return 0;
}
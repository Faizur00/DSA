#include <stdio.h>

// With array traversal we can access each element of the array
// heres the example of array traversal
void arrayTraversal(int arr[], int arraySize)
{
    for (int i = 0; i < arraySize; i++){
        printf("%d \n", arr[i]);
    }
    printf("\n");
} //the usage example is of this function is in main function

// Two dimensional array traversal
// we can traverse two dimensional array by using nested loop
void twoDimArrayTraversal(int row, int column, int aiTwoDimArray[row][column])
{
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%d ", aiTwoDimArray[i][j]);
        }
        printf("\n");
    }
} //the usage example is in the main function

int main(void)
{
    //Example of array traversal usage
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    arrayTraversal(arr, size);

    //Example of two dimensional array traversal usage
    int aiTwoDimArrayExample[2][3] = {{1, 2, 3}, {4, 5, 6}};
    twoDimArrayTraversal(2, 3, aiTwoDimArrayExample);
    return 0;
}

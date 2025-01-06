#include <stdio.h>

// Two dimensional array declaration
// here is an example of two dimensional array declaration in C
int aiTwoDimArrayExample[2][3]; // this is a two dimensional array that store 2 rows and 3 columns

// Two dimensional array initialization
// here is an example of two dimensional array initialization in C
int aiTwoDimArrayExample2[2][3] = {{1, 2, 3}, {4, 5, 6}}; // this is a two dimensional array that store 2 rows and 3 columns

// or we can also initialize like matrix style so it will be easier to read
int aiTwoDimArrayExample3[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
}; // this is a two dimensional array that store 3 rows and 3 columns



int main(void)
{
    // Two dimensional array access
    // we can access two dimensional array by using the following format:
    // array_name[row_index][column_index]
    int iValue1 = aiTwoDimArrayExample2[1][2]; // this will access the value in the second row and third column of the array
    // we can also change the value of the array by using the same format
    int iValue2 = aiTwoDimArrayExample2[1][2] = 10; // this will change the value in the second row and third column of the array to 10
    // printing two dimensional array element
    printf("the value in the second row and third column of aiTwoDimArrayExample2 is: %i\n", aiTwoDimArrayExample2[1][2]);

}
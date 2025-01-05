#include <stdio.h>

// Two dimensional array declaration
// the format of two dimensional array declaration is as follows:
// data_type array_name[row_size][column_size];
// here is an example of two dimensional array declaration in C
int aiTwoDimArrayExample[2][3]; // this is a two dimensional array that store 2 rows and 3 columns

// Two dimensional array initialization
// the format of two dimensional array initialization is as follows:
// data_type array_name[row_size][column_size] = {{value1, value2, value3}, {value4, value5, value6}, ..., {valueN, valueN+1, valueN+2}};
// here is an example of two dimensional array initialization in C
int aiTwoDimArrayExample2[2][3] = {{1, 2, 3}, {4, 5, 6}}; // this is a two dimensional array that store 2 rows and 3 columns
// or we can also initialize like matrix style so it will be easier to read
int aiTwoDimArrayExample3[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
}; // this is a two dimensional array that store 2 rows and 3 columns


int main() {
    printf("Hello, World!\n");
    return 0;
}
#include <stdio.h>

// Array declaration
// here is an example of array declaration in C
int   aiArrayExample[5]; // this is an array that store 5 integers
char  acArrayExample[3]; // this is an array that store 3 characters
float afArrayExample[4]; // this is an array that store 4 floats

// Array initialization
// here is an example of array initialization in C
int   aiArrayExample2[5] = {1, 2, 3, 4, 5};        // this is an array that store 5 integers
char  acArrayExample2[3] = {'a', 'b', 'c'};        // this is an array that store 3 characters
float afArrayExample2[4] = {1.1, 2.2, 3.3, 4.4};   // this is an array that store 4 floats

// Array initialization with partial values
// here is an example of array initialization with partial values in C
int   aiArrayExample3[5] = {1, 2};        // this is an array that store 5 integers but only 2 of them are initialized

// Array initialization without specifying the size
// here is an example of array initialization without specifying the size in C
int   aiArrayExample4[] = {1, 2, 3, 4, 5}; // this is an array that store 5 integers but the size is not specified so the size is automatically calculated

// Acecssing array element
// we can access the element of the array by using the index of the element that stored from 0
// for example in this array:
int aiOddNumber[5] = {1, 3, 5, 7, 9}; //the first element (1) is at index 0 and so on for other element
// more about this in the next snippet

int main(void)
{
    // accessing array element
    printf("the first element of aiOddNumber is: %i\n", aiOddNumber[0]);
    printf("the second element of aiOddNumber is: %i\n", aiOddNumber[1]);
    printf("the third element of aiOddNumber is: %i\n", aiOddNumber[2]);
    printf("the fourth element of aiOddNumber is: %i\n", aiOddNumber[3]);
    printf("the fifth element of aiOddNumber is: %i\n", aiOddNumber[4]);
    return 0;  
}
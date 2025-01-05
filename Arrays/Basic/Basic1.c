#include <stdio.h>

// Array declaration
// the format of array declaration is as follows:
// data_type array_name[array_size];
// here is an example of array declaration in C
int   aiArrayExample[5]; // this is an array that store 5 integers
char  acArrayExample[3]; // this is an array that store 3 characters
float afArrayExample[4]; // this is an array that store 4 floats

// Array initialization
// the format of array initialization is as follows:
// data_type array_name[array_size] = {value1, value2, value3, ..., valueN};
// here is an example of array initialization in C

int   aiArrayExample2[5] = {1, 2, 3, 4, 5};        // this is an array that store 5 integers
char  acArrayExample2[3] = {'a', 'b', 'c'};        // this is an array that store 3 characters
float afArrayExample2[4] = {1.1, 2.2, 3.3, 4.4};   // this is an array that store 4 floats

// we can also change the value of the array that have been initialized 
// by using the following format:
// array_name[index] = new_value;
// here is an example of changing the value of the array
aiArrayExample2[2] = 10; // this will change the value in the third index of the array to 10


// Array Index and Traversal
// Each element in array have an index that stored from 0
// For example in this array:
int aiOddNumber[5] = {1, 3, 5, 7, 9}; //the first element (1) is at index 0 and so on for other element
// we can use this index to accessing all element of the array
// the most common method for array traversal is by using for loop
// here's an function example for array traversal
void fnTraverseArray(int arr[], int length)
{
    for (int i = 0; i < length; i++){
        printf("the element at index %i is: %i\n",i, arr[i]);;
    }
}

int main() {
    fnTraverseArray(aiArrayExample2, sizeof(aiArrayExample2)/sizeof(aiArrayExample2[0]));
    return 0;
}
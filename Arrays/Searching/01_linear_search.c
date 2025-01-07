#include <stdio.h>

// Function to perform linear search on an array
// It takes an array, the size of the array, and the value to search for
int fnLinearSearch(int arr[], int iArraySize, int valueToSearch)
{
    // Loop through each element in the array
    for (int i = 0; i < iArraySize; i++){
        // Check if the current element is equal to the value we are searching for
        if (arr[i] == valueToSearch){
            // If found, return the index of the element
            return i;
        }
    }
    // If the value is not found, return -1
    return -1;
}

int main(void)
{
    // Define an array of integers
    int aiArr[] = {1, 2, 3, 4, 5};
    // Define the value we want to search for in the array
    int iValue = 1;
    // Calculate the number of elements in the array
    int iArraySize = sizeof(aiArr) / sizeof(aiArr[0]);

    // Call the linear search function and store the result in iPosition
    int iPosition = fnLinearSearch(aiArr, iArraySize, iValue);
    // Check if the value was found
    if (iPosition == -1){
        // If not found, print a message
        printf("Value not found\n");
    }
    else{
        // If found, print the value and its index
        printf("Value %i found at index %i \n", iValue, iPosition); 
    }
}



#include <stdio.h>

// inserting a value to the array
// we can use this algorithm to insert another value into our array
void fnInsertElement(int arr[], int arraySize, int valueToInserted, int pos)
{
    printf("array before insertion:\n");
    for (int i = 0; i < arraySize + 1; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");


    // Shifting all the value to right
    for (int i = arraySize - 1; i >= pos; i--){
        arr[i+1] = arr[i];
    }
    // adding value to current position
    arr[pos] = valueToInserted;

    // print the result
    printf("Value %d inserted at position %d\n", valueToInserted, pos);
    printf("array after insertion:\n");
    for (int i = 0; i < arraySize; i++){
        printf("%d ", arr[i]);
    }
}
// we can only use this algorithm to a nonfull array,to insert another value into a full array
// we need a dynamic array or we can use another data structure like linked list
// usage example is in the main function


int main(void)
{
    // usage example of fnInsertElement
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int valueToInserted = 10;
    int pos = 2;
    fnInsertElement(arr, size, valueToInserted, pos);
}
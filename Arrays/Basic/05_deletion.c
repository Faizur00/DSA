#include <stdio.h>

// deleting value in an array
// we can use this algorithm to delet a value in an array
int findElement(int arr[], int n, int key);
void fnDeleteValue(int arr[], int arraySize, int valueToDeleted)
{
    printf("array before deletion:\n");
    for (int i = 0; i < arraySize; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");


    // finding the element first
    int position = findElement(arr, arraySize, valueToDeleted);

    if (position == -1){
        printf("Value not Found");
        return;
    }

    for(int i = position; i < arraySize - 1; i++){
        arr[i] = arr[i+1];
    }
    
    // print the result
    printf("Value %d deleted\n", valueToDeleted);
    printf("array after deletion:\n");
    for (int i = 0; i < arraySize - 1; i++){
        printf("%d ", arr[i]);
    }
}

// finding element in an array
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
     // Return -1 if key is not found
    return -1;
}
// usage example is in the main function


int main(void)
{
    // usage example of fnDeleteValue
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int valueToDeleted = 3;
    fnDeleteValue(arr, size, valueToDeleted);
    return 0;
}
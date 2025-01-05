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
int aiTwoDimArrayExample3[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
}; // this is a two dimensional array that store 3 rows and 3 columns

// Two dimensional array access
// we can access two dimensional array by using the following format:
// array_name[row_index][column_index]
// here is an example of two dimensional array access in C
aiTwoDimArrayExample2[1][2]; // this will access the value in the second row and third column of the array
// we can also change the value of the array by using the same format
aiTwoDimArrayExample2[1][2] = 10; // this will change the value in the second row and third column of the array to 10

// inserting a value to the array
// we can use this algorithm to insert another value into our array
void fnInsertElement(int arr[], int arraySize, int valueToInserted, int pos)
{
    // Shifting all the value to right
    for (int i = arraySize - 1,; i != pos; i--){
        arr[i] = arr[i+1]
    }
    // adding value to current position
    arr[pos] = valueToInserted
}
// we can only use this algorithm to a nonfull array,to insert another value into a full array
// we need a dynamic array

// deleting value in an array
// we can use this algorithm to delet a value in an array
void fnDeleteValue(int arr[], int arraySize, int valueToDeleted)
{
    // finding the element first
    int position = fnFindElement(); //the find element function is an abstraction that shown below

    if (position == -1){
        print("Value not Found");
        return;
    }

    for(int i = pos; i < arraySize - 1; i++){
        arr[i] = arr[i+1];
    }
    return arr[n-1]
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
//again, this algorithm only can work for a non full array

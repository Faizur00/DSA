#include <stdio.h>

void fnMerge(int aiArr[], int iLeft, int iMid, int iRight)
{
	// Merges two subarrays of arr[].
	// First subarray is arr[l..m]
	// Second subarray is arr[m+1..r]

	int iLeftSub = iMid - iLeft + 1; // Corrected size
	int iRightSub = iRight - iMid;

	// Create temp arrays
	int aiLeftArr[iLeftSub];
	int aiRightArr[iRightSub];

	// Copy data to temp arrays L[] and R[]
	for (int i = 0; i < iLeftSub; i++){
		aiLeftArr[i] = aiArr[iLeft + i];
	}

	for (int i = 0; i < iRightSub; i++){
		aiRightArr[i] = aiArr[iMid + 1 + i];
	}
	// Merge the temp arrays back into arr[l..r]
	int iLeftTvr = 0;
	int iRightTvr = 0;
	int iLeftWall = iLeft;

	while (iLeftTvr < iLeftSub && iRightTvr < iRightSub){
		if (aiLeftArr[iLeftTvr] <= aiRightArr[iRightTvr]){
			aiArr[iLeftWall] = aiLeftArr[iLeftTvr];
			iLeftTvr++;
		}
		else {
			aiArr[iLeftWall] = aiRightArr[iRightTvr];
			iRightTvr++;
		}
		iLeftWall++;
	}
	// Copy the remaining elements of L[],
   	// if there are any

	while (iLeftTvr < iLeftSub){
		aiArr[iLeftWall] = aiLeftArr[iLeftTvr];
		iLeftTvr++;
		iLeftWall++;
	}
	// Copy the remaining elements of R[],
    // if there are any

	while (iRightTvr < iRightSub){
		aiArr[iLeftWall] = aiRightArr[iRightTvr];
		iRightTvr++;
		iLeftWall++;
	}

}

void fnMergeSort(int aiArr[], int iLeft, int iRight)
{
	if (iLeft < iRight){
		int iMid = iLeft + (iRight - iLeft) / 2;

		// Sort first and second halves
		fnMergeSort(aiArr, iLeft, iMid);
		fnMergeSort(aiArr, iMid + 1, iRight);

		fnMerge(aiArr, iLeft, iMid, iRight);
	}
}


int main(void)
{
	int aiArr[] = {12, 11, 13, 5, 6, 7, 19, 3, 8, 15, 2, 10, 14, 1, 4, 9, 18, 17, 16, 20};
	int iArrSize = sizeof(aiArr) / sizeof(aiArr[0]);

	printf("Given array is \n");
	for (int i = 0; i < iArrSize; i++){
		printf("%d ", aiArr[i]);
	}
	printf("\n");

	fnMergeSort(aiArr, 0, iArrSize - 1);

	printf("\nSorted array is \n");
	for (int i = 0; i < iArrSize; i++){
		printf("%d ", aiArr[i]);
	}
	printf("\n");

	return 0;
}

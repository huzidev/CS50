#include <stdio.h>

void PrintArray(int *A, int size){
	for(int i = 0; i < size; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}

void SelectionSort(int *A, int size){
	int minelement, temp;
	
	for(int i = 0; i < size-1; i++){
		
		minelement = i;
		printf("the number of steps were %i \n", i+1);
		for(int j = i+1; j < size; j++){
		
			if(A[j] < A[minelement]){ // since we are comparing first elements with all the other elements in ours array so if J is smaller then ours minelement it'll be swapper for sort
				
				minelement = j;
				
			}
			// for swapping just like temporary glass for swapping liquids
			// if i wanted it on (DESCENDING) order rather than (ASCENDING) order we just simply put(J) INSTEAD of (I) to be replaced
			// inside the second for LOOP
		}
			temp = A[i];
			A[i] = A[minelement];
			A[minelement] = temp;
		
	}	
}

int main(void){
//	int A[] = {4, 100, 5, 66, 88, 65, 98, 32, 30, 15, 21, 55, 0, 5, 5, 1};
	int A[] = {9, 5, 4, 3, 2, 1};
	int size = (sizeof(A) / sizeof(int));
	printf("The total numbe of elements are %i\n", size);
	PrintArray(A, size);
	SelectionSort(A, size);
	PrintArray(A, size);
}

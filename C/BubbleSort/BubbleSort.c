#include <stdio.h>

void PrintArray(int *A, int size){
	for( int i = 0; i < size; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}

void BubbleSort(int *A, int size){
	int temp;
	int isSorted = 0;
	for(int i = 0; i < size-1; i++){ // for number of pass we used (n-1) coz there was just 7 seven passes but computer will shows us 8
		
		printf("Working on Pass number %d \n", i+1);
		// we did (i + 1) coz the pass will starts form 0 which is indexified
		
		isSorted = 1;
		for( int j = 0; j <size-1-i; j++){ // for comparison in each pass
			if(A[j] > A[j+1]){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				
				isSorted = 0;
			}
		}
		if(isSorted){ 
			return ;
		}
	}
}

int main(void){
	int A[] = {9, 8, 7, 6, 5, 4, 3, 2};
//	int A[] = {2, 3, 4, 5, 6, 7, 8, 9};
	int size = (sizeof(A) / sizeof(int));
	printf("The total number of elements are %i\n", size);
	PrintArray(A, size);
	BubbleSort(A, (size));
	PrintArray(A, size);
	return 0;
	
	
}

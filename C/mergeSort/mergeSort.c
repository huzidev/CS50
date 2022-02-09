#include <stdio.h>

void printArray(int *A, int size){ // *A means pointer which will makes an dynamic memory in ours heap
	
	for(int i = 0; i <= size ; i++){
	
		printf("%d ", A[i]);
	
	}
	printf("\n");
}

void merge(int A[], int mid, int low, int high){

	int i, j, k, B[100]; // means we can store as high as 100 elements in B array
	
	i = low; // form array A
	j = mid + 1; // from array A
	k = low; // low because it is first from array B
	
	while(i <= mid && j <= high){// means when the elements value (numbers) are less than others from same array than run while loop and make them sort
		
		if( A[i] < A[j] ){ 
			B[k] = A[i];
			i++;
			k++;
		}
		else{
			B[k] = A[j];
			j++;
			k++;
		}
	}
	while( i <= mid ){
		B[k] = A[i];
		k++;
		i++;
	}
	while( j <= high){
		B[k] = A[j];
		k++;
		j++;
	}
	for(int i = low; i<= high; i++){
		A[i] = B[i];  // i for B is low means start from low	
	}
}

void mergeSort(int A[], int low, int high){
	int mid;
	if( low < high ){
		
		mid = (low + high) / 2;
		
		mergeSort(A, low, mid); //first part of ours Array (A)
		mergeSort(A, mid+1, high);
		merge(A, mid, low, high);
		
	}
}

int main(void){
	
	int A[] = {50, 60, 75, 88, 3, 45, 78, 8, 153, 4254, 45, 78, 32, 0};
	
	int n = (sizeof(A) / sizeof(int));
	printf("Total elements are %i\n", n - 1);
	
	printArray(A, n); // before merge sort
	
	mergeSort(A, 0, (n)); // 0 means low (index)
	
	printArray(A, n); // after merge sort
	return 0;
}

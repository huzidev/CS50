#include <stdio.h>

void display( int arr[], int size){
	
	for( int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
	}
	printf("\n");
}


// basically we used K-sort when we've almost sorted array
// we'll use k instead of temp in K-sort and rest code is almost same as insertion sort

void InsertionSortK( int arr[], int size){
	
	int i, j, k;
	
	for (int i = 1; i < size; i++){
		
		k = arr[i];
		j = i - 1;
		
		while( j >= 0 && arr[j] > k){
			
			arr[ j + 1 ] = arr[j];
			j = j-1;
			
		}
		arr[ j+1 ] = k;		
	}
}


int main(void){
	
	int arr[] = {6, 5, 3, 2, 8, 10, 9, 11};
	
	int size = (sizeof(arr) / sizeof(int));
	
	printf("The total elements are %i", size - 1);

	int k = 3; // means maximum iteartion can be 3
	
	printf("\nElements before sortation: ");
	
	display(arr, size);
	
	printf("Elements after sortation: ");
	
	InsertionSortK(arr, size);
	
	display(arr, size);
	
	return 0;
}

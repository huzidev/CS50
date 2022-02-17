#include <stdio.h>

// like playing card first card will be sorted coz we've just one card and that will be sorted

void print( int arr[], int size){
	
	for( int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void InsertionSort( int arr[], int size){
	
	for (int i = 1; i < size; i++){ // just like playing cards the first card (element) we've is sorted and we'll starts from 1st index not from 0th coz 0th is sorted part and we'll check
		
		int tmp = arr[i]; // the element at i will be stored in tmp variable
		
		int j = i - 1; 
		
		while( j >= 0 && tmp < arr[j]){
			
			arr[ j + 1 ] = arr[j];
			
			j--;
		}
		arr[j+1] = tmp;
	}
}


int main(void){
	
	int arr[] = {10, 5, 6, 20};	
	
	int size = (sizeof(arr) / sizeof(int));
	
	printf("The total elements are %i", size - 1);

	printf("\nElements before sortation: ");
	
	print(arr, size);
	
	printf("Elements after sortation: ");
	
	InsertionSort(arr, size);
	
	print(arr, size);
	
	return 0;
}

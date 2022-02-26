#include <stdio.h>
#include <cs50.c>

// for deletetion at End in case of array we simple did size = size-1
int main(void){
	
	int arr[] = {1, 5, 6, 10, 15, 20, 25};
	
	int size = (sizeof(arr)) / sizeof(int);	
	
	printf("Before deletion at beg : ");
	
	for(int i = 0; i < size; i++){
	
		printf("%d ", arr[i]);
	
	}
		
	size = del_first(arr, size);
	
	printf("\nAfter deleting the first element ");
	
	for(int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
		
	}
	return 0;
}

void del_first(int arr[], int size){
	
	if ( size == NULL){
		
		printf("Array is empty");
		return size; // if array is empty then simply return same info
		
	}
	
	for(int i = 0; i < size-1; i++){
		
		arr[i] = arr[i+1]; // basically we are replacing i with i + 1; IF i is 0th index then i + 1 will be first index
		
	}
	return size;
	
}

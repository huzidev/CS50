#include <stdio.h>
#include <cs50.c>

// for deletetion at End in case of array we simple did size = size-1
int main(void){
	
	int arr[] = {1, 5, 6, 10, 15, 20, 25};
	
	int size = (sizeof(arr)) / sizeof(int);	
	
	printf("Before deletion at end : ");
	
	for(int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
		
	}
	
	size = size - 1;
	
	printf("\nAfter deletion at end : ");
	
	for(int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
		
	}
	
	return 0;
}

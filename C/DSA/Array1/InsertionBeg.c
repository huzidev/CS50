#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

int main(void){
	
	int arr[] = {5, 6, 9, 10, 100};
	
	int size = (sizeof(arr) / sizeof(int));	
	
	printf("total elements were %d\n", size-1);
	
	printf("before insertion of element at beg : ");
	
	for(int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);	
		
	}
	
	size = add_beg(arr, size);
	
	for(int i = 0; i < size+1; i++){
		
		printf("%d ", arr[i]);
		
	}
	
	return 0;
	
}

int add_beg(int arr[], int size){
	
	int data;
	
	for(int i = size-1; i >= 0; i--){
		
		arr[i+1] = arr[i];
		
	}
	
	data = get_int("element you wanna insert at beg? ");
	
	arr[0] = data;
	
	return size+1;
	
}

#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

// THERE WILL BE 2 CONDITONS IN CASE OF ARRAYS
// ARRAY FULL 
// ARRAY NOT FULL
// BECAUSE ARRAY HAVE STATIC SIZE

// ARRAY NOT FULL

int main(void){
	
	int array[5];
	int n, free; // n for empty slot after insertion of elements and free is basically ALL the empty slots in array
	n = get_int("number of elements?");
	
	if( n > 5 ){
		
		printf("you can't insert more than 5");
		
	}
	else{
		int result = 5 - n;
		for(int i = 0; i < n; i++){
		
			array[i] = get_int("value: ");
			
		}
		
		free = n; // n is empty slot and free and n will be equal but free will update values
		
		free = add_at_end(array, free, result);
		
		for(int i = 0; i < free; i++){ // i < free the updated element will also take an index therefore a plus of index
			
			printf("%d ", array[i]);
			
		}
	}
	
	return 0;
}

int add_at_end(int array[], int free, int result){
	
	if( result != NULL ){
		
		int data = get_int("element you wanna insert at end");
		
		array[free] = data;
		
		free++; // so free will increment an index and it is compulsory otherwise the last element would not print
	}

	else{
		printf("you've already exceeds the limit\n ");
	}
	
	return free;	
}

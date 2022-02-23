#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

// IN CASE IF ARRAY IS FULL 

int main(void){
	
	int n = 3;
	
	int free;
	
	int array[n];
	
	for(int i = 0; i < n; i++){
		
		array[i] = get_int("value : ");
		
	}
	
	int size = (sizeof(array)) / (sizeof(int));
	
	printf("Total elements were %d\n", size - 1);
	
	// now since their is no more free space in ours array
	
	free = n; // so free will avail the empty space just like n
	
	if ( n == size ){ // means array is full
		
		int b[size+2]; // we'll make array b with size of + 2 of whatever the size of first array is
			
		free = add_at_end(array, b, size, free);
			
		for(int i = 0; i < free; i++){
				
			printf("%d ", b[i]);
		}
		
	}
	return 0;	
}

int add_at_end(int array[], int b[], int n, int free){ // n basically takes size
	
	
	for(int i = 0; i < n; i++){ // means iterate till the size (N) and n is basically the size and copy all the elements from first array to second array
		
		b[i] = array[i]; // means copy all the elements form array[i] to new array B because new array is of greater size
			
	}
	
	int data = get_int("element you wanna insert at end? ");
	
	b[free] = data;
	
	free++;
	
	return free;
	
}

#include <stdio.h>
#include <cs50.c>

void print(int array[], int n){
	
	for(int i = 0; i < n; i++ ){
		
		printf("%d ", array[i]);
		
	}
	printf("\n");
}

int main(Void){
	int n = get_int("How many elements you wanna insert\n");
	
	int array[n]; // acc to size of ours element ours array will be of that size
	
	for(int i = 0; i < n; i++){ 
	
		array[i] = get_int("value: ");
			
	}
	
	int size = (sizeof(array) / sizeof(int));
	
	printf("the total elements are %i\n", (size-1));
	
	print(array, n);
	
	return 0;
}

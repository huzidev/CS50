#include <stdio.h>
#include <cs50.c>
#include <ctype.h>

// like playing card first card will be sorted coz we've just one card and that will be sorted


void InsertionSort( int arr[], int size){
	
	for (int i = 1; i < size; i++){ // just like playing cards the first card (element) we've is sorted and we'll starts from 1st index not from 0th coz 0th is sorted part and we'll check
		
		int tmp = arr[i]; // the element at i will be stored in tmp variable
		
		int j = i - 1; 
		
		while( j >= 0 && tmp < arr[j]){ // for descending order just change the sign
			
			arr[j+1] = arr[j]; // we didn't write temp = arr[j] because
// suppose we've this condition 5, 3, 1, 0
//								j  i(tmp) now arr[j+1] = arr[j] now we'll have something like this 5, 5, 1, 0
//								and because of decrement j is now at -1 we'll came outside the loop			
			j--;
		}
		arr[j+1] = tmp; // there j is at -1 because of decrement there for j+1 should be at 0th index and 
		// because tmp is storing the value 3 we'll insert that value at j+1 at 0th index because we know that j is at -1 currently because of decrement
	}
}

void print( int arr[], int size){
	
	for( int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
		
	}
	printf("\n");
}

int main(void){
	do{
		int n = get_int("How many elements you wanna sort? ");
		
		int arr[n];
		
		for(int i = 0; i < n; i++){
			
			arr[i] = get_int("Value %d : ", i+1);
			
		}
		
		if( n == NULL ){
			
			printf("You didn't insert an appropraite value \n");
		}
		
		else{
		
			int size = (sizeof(arr) / sizeof(int));
		
			printf("The total elements are %i", size - 1);
	
			printf("\nElements before sortation: ");
		
			print(arr, size);
		
			printf("Elements after sortation: ");
		
			InsertionSort(arr, size);
		
			print(arr, size);
		}
		
		printf("Do you wanna continue?\n");
	}
	
	while('y' == getch());
	
	return 0;
}

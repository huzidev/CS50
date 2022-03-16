#include <stdio.h>
#include <cs50.c>
#include <ctype.h>

void BubbleSort(int arr[], int size){
	
	for(int i = 0; i < size-1; i++){ // this loop is for passes we did size-1 because when all the bigger elements moves at right the smallest element will AUTOMATICALLY be placed at first position and if size is 5 then number of passes will just be 4
		
		for(int j = 0; j < size-1-i; j++){ // size-1-i is because, SUPPOSE for first pass we do 5 comparision for second pass we do 4 comparision for 3rd pass we do 3 comparision hence size-1-i
			
			if(arr[j] > arr[j+1]){ // for descending order just change this sign to less than sign
				
				int temp = arr[j]; // the value of j is convert into temp
				 
				arr[j] = arr[j+1]; // the valueof j + 1 is converted into j  now j+1 is empty
				
				arr[j+1] = temp; // now temp value which is greater value we get from j is now converted into j+1 called SWAPING
				
			}
		}	
	}	
}

void PrintArray(int arr[], int size){

	for(int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
		
	}
	printf("\n");	
}

int main(void){
	
	do{
		int n = get_int("How many elements you wana sort? ");
		
		int arr[n];
		
		if ( n == NULL ){
			
			printf("\nYou didn't insert appropriate value\n");
			
		}
		
		else{
			for(int i = 0; i < n; i++){
				
				arr[i] = get_int("Value %d: ", i+1);
		
			}
			
			printf("For Ascending order press 'a' for descending order press 'd'\n");
			
			char format = get_char("How you want it to be sorted? ");
			
			format = toupper(format);
			
			int size = (sizeof(arr) / sizeof(int));
			
			printf("The total number of elements are %i\n", size - 1);
			
			printf("\nBefore sorting the array: ");
			
			PrintArray(arr, size);
			
			printf("\nAfter Sorting the array with Bubble Sort: ");
			
			BubbleSort(arr, size);
			
			PrintArray(arr, size);
		}
		printf("\nDo you wanna continue?\n");
	}
	
	while('y' == getch());
	
	return 0;
}

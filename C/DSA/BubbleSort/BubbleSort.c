#include <stdio.h>
#include <cs50.c>
void BubbleSort(int arr[], int size){
	
	for(int i = 0; i < size; i++){ // first loop will moves ours biggest element at right and therefore we'll use size-i-1
		
		for(int j = 0; j < size-1; j++){ // size-i-1 is because so ours biggest element will remain at end and and wont changed
			
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
	
//	int arr[] = {25, 20, 6, 98, 3, 4, 1, 0, 54, 36, 4, 2};
	
	do{
		int n = get_int("How many elements you wana sort? ");
		
		int arr[n];
		
		if ( n == NULL ){
			
			printf("\nYou didn't insert appropriate value\n");
			
		}
		
		else{
			for(int i = 0; i < n; i++){
				
				arr[i] = get_int("Value: ");
		
			}
			
			int size = (sizeof(arr) / sizeof(int));
			
			printf("The total number of elements are %i\n", size - 1);
			
			printf("Before sorting the array: ");
			
			PrintArray(arr, size);
			
			printf("\nAfter Sorting the array with Bubble Sort: ");
			
			BubbleSort(arr, size);
			
			PrintArray(arr, size);
		}
		printf("Do you wanna continue?\n");
	}
	
	while('y' == getch());
	
	return 0;
}

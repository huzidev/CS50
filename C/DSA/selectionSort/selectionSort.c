#include <stdio.h>
#include <cs50.c>
void selectionSort(int arr[], int size){
	
	for(int j = 0; j < size - 1; j++){ // size - 1 is becasuse we'll have j and j+1 for swapping by comparision now when we came to all over the end the last element the j will be their but J+1 will points toward NULL therefore iterate till size - 1
		
		int min = j; // j will be the 0th index (element) the first ever element	
		
		for(int i = j + 1; i < size; i++ ){ // i = j+1 is because   10 , 6, 5, 4, 1, 2
//																  	 j   i
// if j is minimum first index then i will be next index hence j + 1			
			
			if(arr[i] < arr[min]){ // min is J and i is j + 1 // FOR DESCENDING ORDER CHANGE THE SIGN
				
				min = i;  // coz if i is smaller and min which is j is bigger than swap by (COMPARISION)
				
			}
		}		
			int temp = arr[j]; // since j is at 0th index hence we'll swap elemens of min with j
			
			arr[j] = arr[min];
			
			arr[min] = temp;
	}
}

void printArray(int arr[], int size){
	
	for(int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
	
	}
	printf("\n");
}

int main(void){
	
	int n = get_int("How many elements you wanna sort: ");
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
		
		arr[i] = get_int("value : ");
		
	}
	
	if( n == NULL){
		
		printf("\nYou didn't insert appropriate value");
		
	}
	else{
		
		int size = (sizeof(arr) / sizeof(int));
	
		printf("\n Total elements are %i int the given array \n", size - 1);
	
		printf("\nBefore sorting the array: ");
	
		printArray(arr, size);
	
		printf("\nAfter sorting the array: ");	
	
		selectionSort(arr, size);
	
		printArray(arr, size);
	
	}
	return 0;
}

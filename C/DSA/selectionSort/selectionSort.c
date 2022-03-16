#include <stdio.h>
#include <cs50.c>
#include <ctype.h>

// selection sort is just opposite of bubble sort in bubble sort we send all the bigger elements at right in selection sort we send all the smaller elements at left 

void selectionSort(int arr[], int size){
	
	// if size is 5 then number of swaps will just be 4 therefore size - 1
	
	for(int j = 0; j < size-1; j++){ // size - 1 is becasuse we'll have j and j+1 for swapping by comparision now when we came to all over the end the last element the j will be their but J+1 will points toward NULL therefore iterate till size - 1
		
		int min = j; // j will be the 0th index (element) the first ever element	
		
		for(int i = j + 1; i < size; i++ ){ // i = j+1 is because   10 , 6, 5, 4, 1, 2 and we'll compare it all the way till end so we can compare all the elements
//																  	 j   i // if j is at 0th index then i will be at j+1 index
// if j is minimum first index then i will be next index hence j + 1			
			
			if(arr[i] < arr[min]){ // min is J and i is j + 1 // FOR DESCENDING ORDER CHANGE THE SIGN
				
				min = i;  // coz if i is smaller and min which is j is bigger then make new minimum element and swap it with all the other remaining elements
				
			}
		}		
			int temp = arr[j]; // since j is at 0th index hence we'll swap elemens of min with j
			
			arr[j] = arr[min]; // so element at 1st index which is smaller than element at 0th index therefore we'll swap it by the 0th index element
			
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
	
	do{
		int n = get_int("How many elements you wanna sort: ");
		
		int arr[n];
		
		for(int i = 0; i < n; i++){
			
			arr[i] = get_int("value %d: ", i+1);
			
		}
		
		if( n == NULL ){
			
			printf("You didn't insert appropriate value\n");
			
		}
		else{
			
			printf("For Ascending order press 'a' for descending order press 'd'\n");
			
			char format = get_char("How you want it to be sorted? ");
			
			format = toupper(format);
			
			int size = (sizeof(arr) / sizeof(int));
		
			printf("\n Total elements are %i int the given array \n", size - 1);
		
			printf("\nBefore sorting the array: ");
		
			printArray(arr, size);
		
			printf("\nAfter sorting the array: ");	
		
			selectionSort(arr, size);
		
			printArray(arr, size);
			
		}
		
		printf("Do you wanna continue?\n");
		
	}
	
	while('y' == getch());
	
	return 0;
}

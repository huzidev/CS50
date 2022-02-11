#include <stdio.h>

void selectionSort(int arr[], int size){
	
	for(int j = 0; j < size - 1; j++){ // size - 1 is becasuse we'll have j and j+1 for swapping by comparision now when we came to all over the end the last element the j will be their but J+1 will points toward NULL therefore iterate till size - 1
		
		int min = j; // j will be the first index (element) the first ever element	
		
		for(int i = j + 1; i < size; i++ ){ // i  = j+1 is because   10 , 6, 5, 4, 1, 2
//																  j   i
// if j is minimum first index then i will be next index hence j + 1			
			
			if(arr[i] < arr[min]){ // min is J and i is j + 1
				
				min = i;  // coz if i is smaller and min which is j is bigger than swap by (COMPARISION)
				
			}
		}		
			int temp = arr[j];
			arr[j] = arr[min];
			arr[min] = temp;
	}
}

void printArray(int arr[], int size){
	
	int i;
	for(i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
	
	}
}

int main(void){
	
	int arr[] = {10, 6, 5, 4, 1, 2};
	
	int size = (sizeof(arr) / sizeof(int));
	
	printf("the total elements are %i\n", size - 1);
	
	printf("Before sorting the array: ");
	
	printArray(arr, size);
	
	printf("\nAfter sorting the array: ");	
	
	selectionSort(arr, size);
	
	printArray(arr, size);
	
	return 0;
}

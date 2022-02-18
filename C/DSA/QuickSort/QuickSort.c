#include <stdio.h>
#include <cs50.c>

void SwapElements(int *first, int *second){
	
	int temp = *first;
	
	*first = *second;
	
	*second = temp;
}

int Partition(int arr[], int beg, int end){
	
	int pivot = arr[end];
	
	int pIndex = (beg - 1);
	
	for( int i = beg; i < end; i++){ // why we said < end is because the last one is ours PIVOT 
		
		if ( arr[i] < pivot ){ // 14, 17, 8, 90, 11, 2 there 2 is ours PIVOT
			
			pIndex++; // coz it is at -1 index

			SwapElements(&arr[pIndex], &arr[i]);
		}
		
	}// remember the comparsion will be with every element with the PIVOT one because of FOR loop
	
	
	SwapElements(&arr[ pIndex + 1 ], &arr[end]); // now if ours arr[i] didn't result in lesser than any element we just swap the beg and end with each other
	
	return (pIndex + 1); // since it is a recursive function therefore we says return coz recursive functions call itself again and again	
}

void QuickSort(int arr[], int beg, int end){
	
	if( beg < end ){
		
		int pIndex = Partition(arr, beg, end);
		
		QuickSort(arr, beg, pIndex - 1);
		QuickSort(arr, pIndex + 1, end);
		
	}
	
}

void Print(int arr[], int size){
	
	for(int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
		
	}
	printf("\n");
	
}

int main(void){
	do{
		int n = get_int("How many elements you wanna sort? ");
		
		int arr[n];
		
		if( n == NULL ){
			
			printf("You didn't insert an appropriate value!\n");
			
		}
		
		else{
			
			for(int i = 0; i < n; i++){
				
				arr[i] = get_int("Value : ");
				
			}
			
			int size = (sizeof(arr) / sizeof(int));
			
			printf("Total number of elements are %i\n", size - 1);
			
			printf("Before sorting: ");
			
			Print(arr, size);
			
			printf("\nAfter sorting: ");
			
			QuickSort(arr, 0, size-1);
			
			Print(arr, size);
		
		}
		
		printf("Do you wanna continue?\n");
	}
	
	while('y' ==  getch());
	
	return 0;
}

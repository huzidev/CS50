#include <stdio.h>
#include <cs50.c>

int partition(int arr[], int beg, int end){
	
	int pivot = arr[beg]; // whichever element at beg at will be ours pivot
	
	int i = beg+1; // i will be starts from beg+1 because at beg there will be pivot
	
	int j = end; // j will be at the end
	
	do{ // we'll run do while loop because at beg there will be pivot therefore we'll run it then checks the conditions
		
		while( arr[i] >= pivot ){ // suppose 9, 6, 3, 5, 1
								//			p   i         j
			
			i++; // we'll check the condition if arr[i] is less or equal to pivot then incremenet in this case it is true
// and we'll run this loop until we there is some condition where arr[i] is greater than pivot there ours loop will stop			
		}
		while( arr[j] < pivot ){ // 9, 6, 5, 1
								// p   i     j check if arr[j] is greater than pivot no it is smaller therefore we'll swap because loop will be break
			
			j--; // we'll decremenet j not increment because we've to came from end to beg not from beg to end
			
		}
		
		if( i < j ){ // now in this case i is not less than j because after increment it again and again i will be at end where j is
			
			int temp = arr[i];
			
			arr[i] = arr[j];
			
			arr[j] = temp;
			
		}
		
	}while( i < j ); // therefore this while loop will also breaks
	// this loop will break only if ours pivot is bigger than all other element and element at end is smallest then simply swap them both
	// so smallest element will came at beg and biggest element will came at end
	int temp = arr[beg]; 
	
	arr[beg] = arr[j]; // because j is pointing at last element
	
	arr[j] = temp;

	return j; // make sure to return it to make it clear that at which index we are inserting new node
}

void QuickSort(int arr[], int beg, int end){
		
	if( beg < end ){
		
		int partitionindex = partition(arr, beg, end);
		
		QuickSort(arr, beg, partitionindex - 1); // for left sub-array
		
		QuickSort(arr, partitionindex + 1, end); // for right sub-array
		
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
				
				arr[i] = get_int("Value %d : ", i+1);
				
			}
			
			printf("For Ascending order press 'a' for descending order press 'd'\n");
			
			char format = get_char("Which format you would like? ");
			
			int size = (sizeof(arr) / sizeof(int));
			
			printf("Total number of elements are %i\n", size - 1);
			
			printf("Before sorting: ");
			
			Print(arr, size);
			
			printf("\nAfter sorting: ");
			
			QuickSort(arr, 0, size-1); // means starts form 0 to size-1, 0th index will be receive by low.
			
			Print(arr, size);
		
		}
		
		printf("Do you wanna continue?\n");
	}
	
	while('y' ==  getch());
	
	return 0;
}

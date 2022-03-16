#include <stdio.h>
#include <cs50.c>
#include <ctype.h>

// i is for left, j is for right and k is for new array in which all the sorted array will be insert

void merge(int arr[], int beg, int mid, int end, char format){
	
	int len1 = mid - beg + 1;
	
	int len2 = end - mid;
	
	int LeftArr[len1];  // coz ours MAIN array will became left and right array
	
	int RightArr[len2];
	
	for( int i = 0; i < len1; i++){
		
		LeftArr[i] = arr[beg + i];
		
	}
	
	for( int j = 0; j < len2; j++){
		
		RightArr[j] = arr[mid + 1 + j ]; // mid + 1 is for right array
		
	}
	
	int i, j, k;
	
	i = 0; 
	
	j = 0;
	
	k = beg; // bcz all the sorted elements will be in that array therefore BEG
	
	while( i < len1 && j < len2 ){
		
		if( format == 'A' ){
			
				if( LeftArr[i] < RightArr[j]){
					
					arr[k] = LeftArr[i]; // for descending order we simply replace leftArr[i] with rightArr[j]
					i++;
					
				}
				else{
					
					arr[k] = RightArr[j];  // for descending order we simply replace rightArr[j] with leftArr[i]
					j++;
					
				}
				k++; // so after taking an element we'll move toward next index in new array so k will be available at next for new element
		
			}
			
		else if( format == 'D' ){
			
				if( LeftArr[i] > RightArr[j]){
					
					arr[k] = LeftArr[i]; // for descending order we simply replace leftArr[i] with rightArr[j]
					i++;
					
				}
				else{
					
					arr[k] = RightArr[j];  // for descending order we simply replace rightArr[j] with leftArr[i]
					j++;
					
				}
				k++; // so after taking an element we'll move toward next index in new array so k will be available at next for new element
			}
			
		}
	
	while( i < len1 ){
		
		arr[k] = LeftArr[i];
		i++;
		k++;
		
	}
	while( j < len2 ){
		
		arr[k] = RightArr[j];
		j++;
		k++;
		
	}
	
}


void MergeSort(int arr[], int beg, int end, char format){
	
	if( beg < end ){ // if beg is not less than end then this means that ours array is empty
		
		int mid = beg + ( end - beg ) / 2;
		
		MergeSort(arr, beg, mid, format); // for left array
		
		MergeSort(arr, mid + 1, end, format); // for right array
		
		merge(arr, beg, mid, end, format); // for merging left and right
		
		
	}
}

void Print(int arr[], int size){
	
	for( int i = 0; i < size; i++){
		
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
			
			for( int i = 0; i < n; i++){
				
				arr[i] = get_int("Value %d : ", i+1);
				
			}
			
			printf("For Ascending order press 'a' for descending order press 'd'\n");
			
			char format = get_char("How you want it to be sorted? ");
			
			format = toupper(format);
			
			if( format == 'A' || format == 'D'){
				
				int size = (sizeof(arr) / sizeof(int));
				
				printf("Total elements are %i\n", size-1);
				
				printf("Before Sorting: ");
				
				Print(arr, size);
				
				printf("\nAfter Sorting: ");
				
				MergeSort(arr, 0, size-1, format); // starts from zero till size-1
				
				Print(arr, size);	
				
			}
			else{
				
				printf("Kindly press only 'a' or 'd'!\n");
				
			}	
		
		}
		
		printf("Do you wanna conitnue?\n");
		
	}
	
	while('y' == getch());
	
	return 0;
}		

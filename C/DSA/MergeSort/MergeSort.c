#include <stdio.h>

// i is for left, j is for right and k is for new array in which all the sorted array will be insert

void merge(int arr[], int beg, int mid, int end){
	
	int len1 = mid - beg + 1;
	
	int len2 = end - mid;
	
	int LeftArr[len1], RightArr[len2]; // coz ours MAIN array will became left and right array
	
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
	
	while( i < len1 && j < len2){
		
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
	
	while( i < len1 ){
		
		arr[k] = LeftArr[i];
		i++;
		k++;
		
	}
	while( j < len2){
		
		arr[k] = RightArr[j];
		j++;
		k++;
		
	}
	
}


void MergeSort(int arr[], int beg, int end){
	
	if( beg < end ){ // if beg is not less than end then this means that ours array is empty
		
		int mid = beg + ( end - beg ) / 2;
		MergeSort(arr, beg, mid); // for left array
		MergeSort(arr, mid + 1, end); // for right array
		merge(arr, beg, mid, end); // for merging left and right
		
	}
}

void Print(int arr[], int size){
	
	for( int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
		
	}
	printf("\n");
}

int main(void){
	
	int arr[] = {4, 6, 9, 21, 36, 1, 0, 48, 34, 321};
	
	int size = (sizeof(arr) / sizeof(int));
	
	printf("Total elements are %i\n", size-1);
	
	printf("Before Sorting: ");
	
	Print(arr, size);
	
	printf("\nAfter Sorting: ");
	
	MergeSort(arr, 0, size-1); // for last index size - 1
	
	Print(arr, size);	
	
	return 0;
}

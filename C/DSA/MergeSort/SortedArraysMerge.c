#include <stdio.h>

void merge(int arr1[], int arr2[], int size1, int size2){
	
	int ans[size1 + size2]; // ans will be ours new array in which we'll insert onlys sorted arrays(Elements)
	// will be of total the size of left(size1)array and right(size2)array
		
	int i = 0, j = 0, k = 0; // initially we since ans is (K) array we'll starts its from 0th index
	
	while( i < size1 && j < size2){ // size means total elements can 5 can be 9 anything but i and j is 0 at start
		
		if(arr1[i] < arr2[j]){
			
			ans[k++] = arr1[i++];
			
		}
		else{
			
			ans[k++] = arr2[j++];
			
		}
	}
	while( i < size1){
		
		ans[k++] = arr1[i++];
		
	}
	
	while( j < size2){
		
		ans[k++] = arr2[j++];
		
	}
	
	for( int i = 0; i < size1 + size2; i++){
		
		printf("%d ", ans[i]);
		
	}
}

int main(void){
	
	int arr1[] = {1, 6, 9, 10, 25, 35}; // sorted first array
	int arr2[] = {50, 60, 70, 80, 90, 100, 500}; // sorted second array
	
	int size1 = (sizeof(arr1) / sizeof(int));
	int size2 = (sizeof(arr2) / sizeof(int));
	
	printf("Total elements in left array is %i\n", size1 - 1);
	printf("Total elements in right array is %i\n", size2 - 1);
	
	merge(arr1, arr2, (sizeof(arr1) / sizeof(int)), (sizeof(arr2) / sizeof(int)));

	return 0;
}

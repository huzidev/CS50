#include <stdio.h>



int linearSearch(int arr[], int TargetElement, int size){
	
	for(int i = 0; i < size; i++){
		
		if(arr[i] == TargetElement){
			
			return i; 
			
		}
	}	
	return -1; // if tagret element isn't found
	
}


int main(void){
	
	int arr[] = {65 ,99, 32, 1, 0, 3, 48, 7};
	
	int TargetElement = 3;
	
	int size = (sizeof(arr) / sizeof(int));
	
	printf("total elements are %i\n", size - 1); // for index we says size - 1;
	
	int ans = linearSearch(arr, TargetElement, size); // will stores ours answer
	
	if( ans == -1){
		
		printf(" Element is not present in the given array!");

	}

	else{
		
		printf("Element is found at index numebr %dth of array \n", ans);
		
	}
	
	TargetElement = 100; // which is basically not presenet
	
	ans = linearSearch(arr, TargetElement, size);
	
	if( ans == -1){
		
		printf("Element is not present in the given array\n");
		
	}
	else{
		
		printf("Element is found at index numebr %dth of array \n", ans);
		
	}	
}
	

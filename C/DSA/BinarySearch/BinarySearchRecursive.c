#include <stdio.h>

// in RECURSION we call ours main function again and again and we built an Activation Record in an internal Stack

int BinarySearch(int arr[], int item, int beg, int end){
	
	if( end >= beg ){
		
		int midIndex = beg + ( end - beg ) / 2;
		
		
		if(arr[midIndex] == item ){
			
			return midIndex;
			
		}
		
		else if(arr[midIndex] > item){
			
			return BinarySearch(arr, item, beg, midIndex + 1); // this is call RECUSION call the main function again & again
			// since BinarySearch is the name of ours main function therefore we're calling or making a recursive calls			
		}
		
		else{
			
			return BinarySearch(arr, item, midIndex - 1, end);
			
		}
		
	}
	
	return -1;
}

int main(void){
	
	int arr[] = {25, 35, 38, 65, 70, 75, 80, 99, 100};
	
	int size = (sizeof(arr) / sizeof(int));
	
	printf("The total number of elements are %i\n", size - 1);
	
	int item = 70;
	
	int ans = BinarySearch(arr, item, 0, size); // 0 means beg of index	
	
	if ( ans == -1 ){
		
		printf("The element you searched for isn't present in the given array\n");
		
	}
	else{
		
		printf("the element you search for is %dth element of array\n", ans);
		
	}
	
	return 0;
}

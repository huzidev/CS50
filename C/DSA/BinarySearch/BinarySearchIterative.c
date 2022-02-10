#include <stdio.h>

// this is basically the iterative algorithm for BinarySearch 
// in iterative algorithm we used LOOPS while in recursive algorithm for binary search tree we used functions that Re-Call themself and forms Activation Chart and internal stacks

int BinarySearch(int arr[], int item, int beg, int end){
	
	while( beg <= end ){ //beg can't be greater than end
 		
		int midIndex = beg + ( end - beg ) / 2; // we did it so we can get rid of overflow conditons coz suppose we've biggest element aka end int of 200 and begining elment is 100 so 100(200-100) / 2 is 200 / 2 which is in range
		
		if( arr[midIndex] == item ){// item is element we wanna search
			
			return midIndex;
		}
		else if(arr[midIndex] < item){ // if item we searched for is bigger than midindex we simply divide and remove the beg part
 			
			beg = midIndex + 1;
			
		}
		else{
			
			end = midIndex - 1;
			
		}
	}
	// if none of ours conditon been execute in while loop we'll return -1
	return -1;
}

int main(void){
	
	int arr[] = {10, 25, 35, 40, 55, 65, 79, 99, 100};
	
	int size = (sizeof(arr) / sizeof(int));
	
	printf("The total number of elements are %i\n", size - 1);
	
	int item = 99;
	
	int ans = BinarySearch(arr, item, 0, size); // 0 means beg of index	
	
	if ( ans == -1 ){
		
		printf("The element you searched for isn't present in the given array\n");
		
	}
	else{
		
		printf("the element you search for is %dth element of array\n", ans);
		
	}
	
	return 0;
}

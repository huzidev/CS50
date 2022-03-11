#include <stdio.h>
#include <cs50.c>

// in RECURSION we call ours main function again and again and we built an Activation Record in an internal Stack.

int BinarySearch(int arr[], int item, int beg, int end){
	
	while( beg <= end ){
		
		int midIndex = beg + ( end - beg ) / 2;
		
		if(arr[midIndex] == item ){
			
			return midIndex;
			
		}
		
		else if(arr[midIndex] > item){
			
			// basically we did completely right on iterative we says end = midindex - 1; thier we replaced end with midindex - 1
		
			return BinarySearch(arr, item, beg, midIndex - 1); // this is call RECURSION call the main function again & again

			// since BinarySearch is the name of ours main function therefore we're calling or making a recursive calls			
	
		}
	
		else{
	
			return BinarySearch(arr, item, midIndex + 1, end); 	
	
		}

	}
	return -1;
}

int main(void){
	
	int arr[] = {10, 25, 35, 40, 55, 65, 79, 99, 100};
	
	int size = (sizeof(arr) / sizeof(int));
	
	printf("The total number of elements are %i\n", size - 1);
	
	printf("Which element you wanna search in bw them? : ");
	
	for( int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
		
	}
	
	int item = get_int("\nWhich element you wanna search : ");
	
	int ans = BinarySearch(arr, item, 0, size); // 0 means beg of index	
	
	if( ans == -1 ){
		
		printf(" Element is not present in the given array!");

	}

	else{
		
		if( item == arr[1] ){
			
			printf("Element is found at index numebr %dst of array \n", ans);
			
		}
		
		else if( item == arr[2] ){
			
			printf("Element is found at index numebr %dnd of array \n", ans);
			
		}
		
		else if( item == arr[3] ){
			
			printf("Element is found at index numebr %drd of array \n", ans);
			
		}
		else{
		
			printf("Element is found at index numebr %dth of array \n", ans);
		
		}
		
		
	}
	return 0;
}

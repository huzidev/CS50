#include <stdio.h>
#include <cs50.c>

int binarysearch(int arr[], int item, int beg, int end){
	
	while( beg <= end){
		int mid;
		
		mid = beg + ( end - beg ) / 2;
		
		if(arr[mid] == item){
			
			return mid;
	
		}
		else if( arr[mid] < item ){
			
			beg = mid + 1;
			
		}
		else{
			
			end = mid - 1;
			
		}
		
	}
	return -1;
}


int main(void){
	
	int arr[] = {10, 25, 35, 40, 55, 65, 79, 99, 100};
	
	int size = (sizeof(arr) / sizeof(int));
	
	printf("The total number of elements are %i\n", size - 1);
	
	printf("List of arrays : 10, 25, 35, 40, 55, 65, 79, 99, 100\n");
	
	int item = get_int("Which element you wanna search : ");
	
	int ans = binarysearch(arr, item, 0, size); // 0 means beg of index	
	
	if ( ans == -1 ){
		
		printf("The element you searched for isn't present in the given array\n");
		
	}
	else{
		
		printf("the element you search for is %dth element of array\n", ans);
		
	}
	
	return 0;
}

#include <stdio.h>
#include <cs50.c>

int BinarySearch(int array[], int size, int element){
	int low, mid, high;
	low = 0;
	high = size - 1;
	
	while(low <= high){
		mid = (low + high) / 2;
		
		if(array[mid] == element){
			return mid;
		}
		
		else if( array[mid] < element ){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	} 	
	return -1;
}

int main(void){
	int array[] = {1, 2, 3, 4, 6, 8, 10, 55, 65, 78, 99, 100, 500};
	
	int size = sizeof(array) / sizeof(int);
	
	printf("Total number of arrays are %i\n", size);
	
	printf("which element you wanna search 1, 2, 3, 4, 6, 8, 10, 55, 65, 78, 99, 100, 500\n");
	
	int element = get_int("element: ");
	
	int Search = BinarySearch(array, size, element);
	
	printf("The element %d was found at index number %d\n", element, Search);
	
	return 0;
}

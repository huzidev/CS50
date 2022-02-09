#include <stdio.h>
#include <cs50.c>
//conditon sorted or not sorted doesn't matter it'll works
int LinearSearch(int array[], int size, int element){
	for(int i = 0; i < size; i++){
		
		if(array[i] == element){ // [i] means if array became equal element at any point then return i;

			return i;
		}
		else{
			printf("Not Found\n");
		}
	}
	
	return -1;

}

int main(void){
	int array[] = {1, 2, 3, 4, 5, 6, 78, 98, 105, 500};
	
	int size = sizeof(array) / sizeof(int) ;
	printf("The total number of element are %i\n", size - 1); // coz of indexified
	
	printf("Which element you wana search in bw them? 1, 2, 3, 4, 5, 6, 78, 98, 105, 500\n");
	int element = get_int("element: ");
	
	int Search = LinearSearch(array, size, element);
	printf("The element %d is found at index number %d", element, Search);
	return 0;
}

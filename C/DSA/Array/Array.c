#include <stdio.h>

int main(Void){
	
	int array[] = {1, 5, 6, 7, 8, 9};
	
	int size = (sizeof(array) / sizeof(int));
	printf("the total elements are %i\n", (size-1)); //size - 1 is because indexified starts from zero
	
	for(int i = 0; i < size; i++){ // if we says i < 10 then after printing the elements which are present but we've say i < 10 then it'll print garbage value for us
		
		printf("%d ", array[i]);
		
	}
}

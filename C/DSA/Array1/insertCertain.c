#include <stdio.h>
#include <cs50.c>

int main(void){
	
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	int size = sizeof(arr)/sizeof(int);
	
	printf("total elements are %d\n", size-1);
	
	int location = get_int("At which position you wanna insert new element? ");
	
	if ( location < 1 || location > 11){
		
		printf("You can only insert new element bw 1 to 11");
		
	}
	
	else{
		
		int pos = location;
		
		int data;
		
		int arr1[size + 1]; // one size plus because copy the values from old array into new array called size+1
		
		add_at_pos(arr, arr1, pos, data, size, location);
		
		for(int i = 0; i < size+1; i++){ // so it'll iterate till the new size (size + 1)
			
			printf("%d ", arr1[i]); // arr1 is ours new array
			
		}
	}
	return 0;
}

void add_at_pos(int arr[], int arr1[], int pos, int data, int size, int location){
	
	int index = pos - 1; // if ours desired positon is 5 then index will be at 4 coz index = pos - 1
	
	for(int i = 0; i <= index - 1; i++){ // <= index - 1 if index is 4 then we'll iterate it till 3 elements just
		
		arr1[i] = arr[i]; // copy all the elements ONLY till index - 1 then we'll insert ours desired value at position
		
	}
	
	data = get_int("which element you wanna insert as posisiton %dth? : ", location);
	 
	arr1[index] = data; // till index - 1 is the value we copied ours element till therefore at [INDEX] part of new array we'll insert ours desired data
	
	for(int i = index + 1, j = index; i < size + 1, j < size; i++, j++){ // since we used <= index - 1 therefore we'll use index + 1
		
		arr1[i] = arr[j]; 
		
	}
	
}

#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

int main(void){
	
	int arr[5];
	int data;
	int i, n;	
	
	n = get_int("how many elements you wanna print? ");
	
	if ( n >= 5 ){
		
		printf("You have to insert less than 5 int");
		
	}
	
	else{
		
		
		for(int i = 0; i < n; i++){
			
			arr[i] = get_int("value : ");
			
		}
		
		n = add_beg(arr, n, data);
		
		for(int i = 0; i <= n; i++){ // so updated values at n shall also work
			
			printf("%d ", arr[i]);
			
		}
	}
	return 0;
}

int add_beg(int arr[], int n, int data){
	
	for(int i = n-1; i >= 0; i--){ // coz n is the empty slot available and n-1 is the last ever value i>=0 so when i get into -ve index we simply break the loops
		
		arr[i+1] = arr[i]; // suppose if n = i-1 means if n is at 4th index then i should have to be at 3rd index but we wanted to insert the value of 3rd index to 4th index like swapping
		
	}
	
	data = get_int("element you wanna insert at beg? ");
	
	arr[0] = data;
	
	return n;
		
}

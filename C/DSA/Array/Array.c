#include <stdio.h>
#include <cs50.c>

//void print(int array[], int n){
//	
//	for(int i = 0; i < n; i++ ){
//		
//		printf("%d ", array[i]);
//		
//	}
//	printf("\n");
//}



int main(Void){
	
	do{
		int n = get_int("How many elements you wanna insert : ");
		
		int array[n]; // acc to size of ours element ours array will be of that size
		
		if ( n == NULL ){
			
			printf("You didn't insert appropriate value\n");
			
		}
		
		else{
			
			for(int i = 0; i < n; i++){ 
			
				array[i] = get_int("value: ");
					
			}
			
			int size = (sizeof(array) / sizeof(int));
			
			printf("the total elements are %i\n", (size-1));
			
			for(int i = 0; i < n; i++){ // will iterate till the size of ours (N)
			
				printf("%d ", array[i]);
				
			}
			printf("\n");
		}
	//	print(array, n);
	
		printf("Do you wanna continue?\n");
		
	}
	
	while('y' == getch());
	
	return 0;
}

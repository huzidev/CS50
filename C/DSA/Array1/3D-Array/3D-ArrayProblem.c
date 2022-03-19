#include <stdio.h>
#include <cs50.c>
#include <ctype.h>

int main(void){
	
	int parts = 2;
	
	int row = 5;
		
	int columns = 5;
		
	int arr[2][5][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25}; 
		
	printf("\nBefore applying algorithm! : ");
		
	int size = (sizeof(arr))/sizeof(int);
		
	
	for( int i = 0; i < parts; i++ ){
			
		printf("\n");
		
		for( int j = 0; j < row; j++ ){
			
			printf("\n");
			
			for( int k = 0; k < columns; k++ ){
				
					printf("%d ", arr[i][j][k]);
			
			}
		}	
	}
		
	printf("\n");
		
	printf("\nTotal element are %d ", size-1);
		
	printf("\n");
	
	return 0;
}

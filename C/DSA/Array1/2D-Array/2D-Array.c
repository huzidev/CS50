#include <stdio.h>
#include <cs50.c>

// for 2D array we'll use nested loop 
// one loop is for rows and other one is for columns
int main(void){
	
	int row = get_int("How many rows you want? ");
	
	int columns = get_int("How many columns you want? ");
	
	int arr[row][columns]; // first one will be rows the horizontal lines and the vertical lines are columns the other one
	
	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < columns; j++){
			
			if( i == 0 & j == 0){
				arr[i][j] = get_int("value for row %dth, value for column %dth ", i, j); // now values will be print according to specific position of row and columns
			}
			
		}
		
	} 
	
	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < columns; j++){
			
			printf("%d ", arr[i][j]);
			
		}
		
	} 
	
	return 0;
	
}

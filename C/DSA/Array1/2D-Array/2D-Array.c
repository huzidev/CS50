#include <stdio.h>
#include <cs50.c>

int main(void){
	
	int row = get_int("How many rows you want? ");
	
	int columns = get_int("How many columns you want? ");
	
	int arr[row][columns];
	
	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < columns; j++){
			
//			arr[i][j] = get_int("Value %d : ",  );
			arr[i][j] = get_int("value for row %d, value for column %d ", i+1, j+1);
//			arr[j] = get_int("value for column %d ", j++);
		}
		
	} 
	
	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < columns; j++){
			
			printf("%d ", arr[i][j]);
			
		}
		
	} 
	
}

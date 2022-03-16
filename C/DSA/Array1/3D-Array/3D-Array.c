#include <stdio.h>
#include <cs50.c>

int main(void){
	
	int parts = get_int("How many 2D Array you want? ");
	
	int row = get_int("How many rows you want? ");
	
	int columns = get_int("How many columns you want? ");
	
	int arr[parts][row][columns];
	
	for(int i = 0; i < parts; i++){
		
		for(int j = 0; j < row; j++){
			
			for(int k = 0; k < columns; k++){ // k is for columns
				
				arr[parts][row][columns] = get_int("Value for %d 2D-array's %d row's %d columns ", parts++, row++, columns++ );
				
			}
			
		}
		
	}
	
	for(int i = 0; i < parts; i++){
		
		for(int j = 0; j < row; j++){
			
			for(int k = 0; k < columns; k++){ // k is for columns
				
				printf("%d ", arr[parts][row][columns]);
				
			}
			
		}
		
	}
}

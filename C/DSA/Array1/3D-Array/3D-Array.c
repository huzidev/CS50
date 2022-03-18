#include <stdio.h>
#include <cs50.c>

// for three dimensional array we've to created 3 loops first loop is for all the 2D-dimensional array we wanted to create and rest of the other will be same as of 2D-array

int main(void){
	
	int parts = get_int("How many 2D Array you want? ");
	
	int row = get_int("How many rows you want? ");
	
	int columns = get_int("How many columns you want? ");
	
	int arr[parts][row][columns];
	
	for(int i = 0; i < parts; i++){
		
		for(int j = 0; j < row; j++){
			
			for(int k = 0; k < columns; k++){ // k is for columns
				
				// for 0th 2D-array 0th row and 0 to 3 columns	
						
				if( i == 0 && j == 0 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 0 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 0 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 0 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %drd column : ", i, j, k);
					
				}	
				
				// for 0th 2D-array 1th row and 0 to 3 columns
				
				else if( i == 0 && j == 0 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 2 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 1 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dst row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 1 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %d 2D-array's %dst row's %dst column : ", i, j, k);
					
				}					
			}
		}	
	}	

	for(int i = 0; i < parts; i++){
		
		for(int j = 0; j < row; j++){
			
			for(int k = 0; k < columns; k++){ // k is for columns
				
				printf("%d ", arr[i][j][k]);
				
			}
			
		}
		
	}
	
	return 0;
	
}

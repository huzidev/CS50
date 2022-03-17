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
				
				if( i == 0 && j == 0 && k == 0 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %dth columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 0 && k == 1 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %dst columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 0 && k == 2 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %dnd columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 0 && k == 3 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %drd columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 0 && k > 3 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %dth columns ", i, j, k );
				
				}
				
				
				
				
				
				else if( i == 0 && j == 1 && k == 0 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dst row's %dth columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 1 && k == 1 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dst row's %dst columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 1 && k == 2 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dst row's %dnd columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 1 && k == 3 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dst row's %drd columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 1 && k > 3 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dst row's %dth columns ", i, j, k );
				
				}
				
				
				
				
				
				else if( i == 0 && j == 2 && k == 0 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dnd row's %dth columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 2 && k == 1 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dnd row's %dst columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 2 && k == 2 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dnd row's %dnd columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 2 && k == 3 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dnd row's %drd columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 2 && k > 3 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dnd row's %dth columns ", i, j, k );
				
				}
				
				
				
				else if( i == 0 && j == 3 && k == 0 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %drd row's %dth columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 3 && k == 1 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %drd row's %dst columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 3 && k == 2 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %drd row's %dnd columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 3 && k == 3 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %drd row's %drd columns ", i, j, k );
				
				}
				
				else if( i == 0 && j == 3 && k > 3 ){
				
					arr[i][j][k] = get_int("Value for %dth 2D-array's %drd row's %dth columns ", i, j, k );
				
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

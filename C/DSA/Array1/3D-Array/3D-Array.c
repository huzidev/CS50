#include <stdio.h>
#include <cs50.c>

// for three dimensional array we've to created 3 loops first loop is for all the 2D-dimensional array we wanted to create and rest of the other will be same as of 2D-array

int main(void){
	
	int parts = get_int("How many 2D Array you want? ");
	
	int row = get_int("How many rows you want? ");
	
	int columns = get_int("How many columns you want? ");
	
	int arr[parts][row][columns];
	
	for(int i = 0; i < parts; i++){ // therefore first all of ours columns will be execute then row then parts
		
		for(int j = 0; j < row; j++){ // just as the case for columns as rows iterate compeletely then loop for parts will work
			
			for(int k = 0; k < columns; k++){ // k is for columns & once columns iterate compeletely then loop for rows will work
				
				// for 0th 2D-array 0th row and 0 > 3rd columns		
						
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
				
				else if( i == 0 && j == 0 && k > 3 ){
			
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dth row's %dth column : ", i, j, k);
				
				}
				
				// for 0th 2D-array 1st row and 0 > 3rd columns	
				
				else if( i == 0 && j == 1 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dst row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 1 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dst row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 1 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dst row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 1 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dst row's %drd column : ", i, j, k);
					
				}	
				
				else if( i == 0 && j == 1 && k > 3 ){
			
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dst row's %dth column : ", i, j, k);
				
				}
				
				// for 0th 2D-array 2nd row and 0 > 3rd columns	
				
				else if( i == 0 && j == 2 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dnd row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 2 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dnd row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 2 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dnd row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 2 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dnd row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 2 && k > 3 ){
			
					arr[i][j][k] = get_int("Value for %dth 2D-array's %dnd row's %dth column : ", i, j, k);
				
				}
				
				// for 0th 2D-array 3rd row and 0 > 3rd columns	
				
				else if( i == 0 && j == 3 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %drd row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 3 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %drd row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 3 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %drd row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 3 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dth 2D-array's %drd row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 0 && j == 3 && k > 3 ){
			
					arr[i][j][k] = get_int("Value for %dth 2D-array's %drd row's %dth column : ", i, j, k);
				
				}
				
				// for 1st 2D-array 0th row and 0 > 3rd columns		
						
				else if( i == 1 && j == 0 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dth row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 0 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dth row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 0 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dth row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 0 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dth row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 0 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dth row's %dth column : ", i, j, k);
					
				}	
				
				// for 1st 2D-array 1st row and 0 > 3rd columns		
						
				else if( i == 1 && j == 1 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dst row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 1 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dst row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 1 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dst row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 1 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dst row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 1 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dst row's %dth column : ", i, j, k);
					
				}
				
				// for 1st 2D-array 2nd row and 0 > 3rd columns			
						
				else if( i == 1 && j == 2 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dnd row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 2 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dnd row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 2 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dnd row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 2 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dnd row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 2 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %dnd row's %dth column : ", i, j, k);
					
				}
				
				// for 1st 2D-array 3rd row and 0 > 3rd columns		
						
				else if( i == 1 && j == 3 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %drd row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 3 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %drd row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 3 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %drd row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 3 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %drd row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 1 && j == 3 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %dst 2D-array's %drd row's %dth column : ", i, j, k);
					
				}
				
				// for 2nd 2D-array 0th row and 0 > 3rd columns		
						
				else if( i == 2 && j == 0 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dth row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 0 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dth row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 0 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dth row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 0 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dth row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 0 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dth row's %dth column : ", i, j, k);
					
				}
				
				// for 2nd 2D-array 1st row and 0 > 3rd columns		
						
				else if( i == 2 && j == 1 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dst row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 1 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dst row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 1 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dst row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 1 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dst row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 1 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dst row's %dth column : ", i, j, k);
					
				}
					
				// for 2nd 2D-array 2nd row and 0 > 3rd columns		
						
				else if( i == 2 && j == 2 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dnd row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 2 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dnd row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 2 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dnd row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 2 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dnd row's %drd column : ", i, j, k);
					
				}	
				
				else if( i == 2 && j == 2 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %dnd row's %dth column : ", i, j, k);
					
				}
				
				// for 2nd 2D-array 3rd row and 0 > 3rd columns		
						
				else if( i == 2 && j == 3 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %drd row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 3 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %drd row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 3 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %drd row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 3 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %drd row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 2 && j == 3 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %dnd 2D-array's %drd row's %dth column : ", i, j, k);
					
				}
				
				// for 3rd 2D-array 0th row and 0 > 3rd columns		
						
				else if( i == 3 && j == 0 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dth row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 0 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dth row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 0 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dth row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 0 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dth row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 0 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dth row's %dth column : ", i, j, k);
					
				}
				
				// for 3rd 2D-array 1st row and 0 > 3rd columns		
						
				else if( i == 3 && j == 1 && k == 0 ){
			
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dst row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 1 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dst row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 1 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dst row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 1 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dst row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 1 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dst row's %dth column : ", i, j, k);
					
				}
				
				// for 3rd 2D-array 2nd row and 0 > 3rd columns		
						
				else if( i == 3 && j == 2 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dnd row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 2 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dnd row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 2 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dnd row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 2 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dnd row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 2 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %dnd row's %dth column : ", i, j, k);
					
				}
				
				// for 3rd 2D-array 3rd row and 0 > 3rd columns	
						
				else if( i == 3 && j == 3 && k == 0 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %drd row's %dth column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 3 && k == 1 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %drd row's %dst column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 3 && k == 2 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %drd row's %dnd column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 3 && k == 3 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %drd row's %drd column : ", i, j, k);
					
				}
				
				else if( i == 3 && j == 3 && k > 3 ){
					
					arr[i][j][k] = get_int("Value for %drd 2D-array's %drd row's %dth column : ", i, j, k);
					
				}
				
				// for 3rd 2D-array 3rd row and 0 > 3rd columns
				
				else if( i > 3 && j > 3 && k == 0){
					
					for( int k = 0; k < columns; k++ ){
						
						
						
					}
					
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

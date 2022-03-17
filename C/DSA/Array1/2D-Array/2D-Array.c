#include <stdio.h>
#include <cs50.c>

// for 2D array we'll use nested loop 
// one loop is for rows and other one is for columns
int main(void){
	
	do{
		int row = get_int("How many rows you want? ");
		
		int columns = get_int("How many columns you want? ");
		
		int arr[row][columns]; // first one will be rows the horizontal lines and the vertical lines are columns the other one
		
		for(int i = 0; i < row; i++){
			
			for(int j = 0; j < columns; j++){
				
				if( i == 0 && j == 0 ) {
					
					arr[i][j] = get_int("value for row %dth, value for column %dth ", i, j); // now values will be print according to specific position of row and columns
			
				}
				
				else if( i == 0 && j == 1 ){
					
					arr[i][j] = get_int("value for row %dth, value for column %dst ", i, j); 
					
				}
				
				else if( i == 0 && j == 2 ){
					
					arr[i][j] = get_int("value for row %dth, value for column %dnd ", i, j); 
					
				}
				
				else if( i == 0 && j == 3 ){
					
					arr[i][j] = get_int("value for row %dth, value for column %drd ", i, j); 
					
				}
				
				else if( i == 0 && j > 3 ){
					
					arr[i][j] = get_int("value for row %dth, value for column %dth ", i, j);
					
				}
				
				else if( i == 1 && j == 0 ){
					
					arr[i][j] = get_int("value for row %dst, value for column %dth ", i, j); 
					
				}
				
				else if( i == 1 && j == 1 ){
					
					arr[i][j] = get_int("value for row %dst, value for column %dst ", i, j);
					 
				}
				
				else if( i == 1 && j == 2 ){
					
					arr[i][j] = get_int("value for row %dst, value for column %dnd ", i, j); 
					
				}
				
				else if( i == 1 && j == 3 ){
					
					arr[i][j] = get_int("value for row %dst, value for column %drd ", i, j); 
					
				}
				
				else if( i == 1 && j > 3 ){
					
					arr[i][j] = get_int("value for row %dst, value for column %dth ", i, j);
					
				}
				
				else if( i == 2 && j == 0 ){
					
					arr[i][j] = get_int("value for row %dnd, value for column %dth ", i, j); 
					
				}
				else if( i == 2 && j == 1 ){
					
					arr[i][j] = get_int("value for row %dnd, value for column %dst ", i, j); 
					
				}
				
				else if( i == 2 && j == 2 ){
					
					arr[i][j] = get_int("value for row %dnd, value for column %dnd ", i, j); 
					
				}
				
				else if( i == 2 && j == 3 ){
					
					arr[i][j] = get_int("value for row %dnd, value for column %drd ", i, j);
					 
				}
				
				else if( i == 2 && j > 3 ){
					
					arr[i][j] = get_int("value for row %dnd, value for column %dth ", i, j);
					
				}
				
				else if( i == 3 && j == 0 ){
					
					arr[i][j] = get_int("value for row %drd, value for column %dth ", i, j);
					 
				}
				
				else if( i == 3 && j == 1 ){
					
					arr[i][j] = get_int("value for row %drd, value for column %dst ", i, j); 
					
				}
				
				else if( i == 3 && j == 2 ){
					
					arr[i][j] = get_int("value for row %drd, value for column %dnd ", i, j); 
					
				}
				
				else if( i == 3 && j == 3 ){
					
					arr[i][j] = get_int("value for row %drd, value for column %drd ", i, j);
					 
				}
				
				else if( i == 3 && j > 3 ){
					
					arr[i][j] = get_int("value for row %drd, value for column %dth ", i, j);
					
				}
				
				else if( i > 3 && j == 0 ){
						
					for(int j = 0; j < columns; j++){ // because we don't have to update rows anymore therefore we just simply update columns
							
						if( i > 3 && j == 0 ){
								
							arr[i][j] = get_int("value for row %dth, value for column %dth ", i, j);
								
						}
							
						else if( i > 3 && j == 1 ){
								
							arr[i][j] = get_int("value for row %dth, value for column %dst ", i, j);
								
						}
							
						else if( i > 3 && j == 2 ){
								
							arr[i][j] = get_int("value for row %dth, value for column %dnd ", i, j);
								
						}
							
						else if( i > 3 && j == 3 ){
								
							arr[i][j] = get_int("value for row %dth, value for column %drd ", i, j);
								
						}
							
						else if( i > 3 && j > 3 ){
								
							arr[i][j] = get_int("value for row %dth, value for column %dth ", i, j);	
								
						}
					}		
				}
			}	
		} 
	
		for(int i = 0; i < row; i++){
			
			for(int j = 0; j < columns; j++){
				
				printf("%d ", arr[i][j]);
				
			}
			
		} 
		
		printf("\nDo you wanna continue? \n");
		
	}while( 'y' == getch() );
	
	return 0;
	
}

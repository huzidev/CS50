#include <stdio.h>
#include <cs50.c>

int main(void){
	
	do{
		
		int row = 5;
		
		int columns = 5;
		
		int arr[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}; 
		
		printf("Before applying algorithm! : ");
		
		for(int i = 0; i < row; i++){
		
			for(int j = 0; j < columns; j++){
			
			printf("%d ", arr[i][j]);
			
			}
		
		}
		
		printf("After appyling algorithm! : ")
		
		printf("\nDo you wanna continue? \n");
	}
		
	while( 'y' == getch() );
	
	return 0;
	
}

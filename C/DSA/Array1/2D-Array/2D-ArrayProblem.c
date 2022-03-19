#include <stdio.h>
#include <cs50.c>
#include <ctype.h>

int main(void){
	
	int row = 5;
		
	int columns = 5;
		
	int arr[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}; 
		
	printf("\nBefore applying algorithm! : ");
		
	printf("\n ");
		
	int size = (sizeof(arr))/sizeof(int);
		
	for(int i = 0; i < row; i++){
			
			printf("\n");
			
			for(int j = 0; j < columns; j++){
				
				printf("%d ", arr[i][j]);
			
			}
		
		}
		
	printf("\n");
		
	printf("\nTotal element are %d ", size-1);
		
	printf("\n");
		
	do{
		
		printf("\n********** MENU **********");
		
		printf("\n1.Press 'A' for printing only elements diagonally in ascending order ");
		
		printf("\n2.Press 'D' for printing only elements diagonally in descending order ");
		
		printf("\n3.Press 'E' for printing only Even Rows and columns ");
		
		printf("\n4.Press 'O' for printing only Odd Rows and columns ");
		
		printf("\n5.Press 'P' for printing only Even elements in both rows and columns ");
		
		printf("\n6.Press 'K' for printing only Odd elements in both rows and columns ");
		
		printf("\n Enter yours choice : ");
		
		char ans = get_char("");
		
		ans = toupper(ans);
		
		if( ans == 'A' ){
			
			printf("\nAfter appyling algorithm! : ");
			
			for(int i = 0; i < 1; i++){
					
				printf("%d %d %d %d %d ", arr[0][0], arr[1][1], arr[2][2], arr[3][3], arr[4][4]);
				
			}
			
		}
		
		else if( ans == 'D' ){
			
			printf("\nAfter appyling algorithm! : ");
			
			for(int i = 0; i < 1; i++){
				
				printf("%d %d %d %d %d ", arr[4][4], arr[3][3], arr[2][2], arr[1][1], arr[0][0]);
				
			}
			
		}
		
		else if( ans == 'E' ){
			
			printf("\nAfter appyling algorithm! : ");
			
			for(int i = 0; i < 1; i++){
					
				printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", arr[0][0], arr[0][1], arr[0][2], arr[0][3], arr[0][4], arr[2][0], arr[2][1], arr[2][2], arr[2][3], arr[2][4], arr[4][0], arr[4][1], arr[4][2], arr[4][3], arr[4][4]);
				
			}
			
		}
		
		else if( ans == 'O' ){
			
			printf("\nAfter appyling algorithm! : ");
			
			for(int i = 0; i < 1; i++){
				
				printf("%d %d %d %d %d %d %d %d %d %d ", arr[1][0], arr[1][1], arr[1][2], arr[1][3], arr[1][4], arr[3][0], arr[3][1], arr[3][2], arr[3][3], arr[3][4]);
				
			}
			
		}
		
		else if( ans == 'K' ){
			
			printf("\nAfter appyling algorithm! : ");
			
			for( int i = 0; i < row; i++ ){
				
				for( int j = 0; j < columns; j++ ){
					
					if( arr[i][j] % 2 == 1 ){
						
						printf("%d ", arr[i][j]);
						
					}
	
				}
				
			}
			
		}
		
		else if( ans == 'P' ){
			
			printf("\nAfter appyling algorithm! : ");
			
			for( int i = 0; i < row; i++ ){
				
				for( int j = 0; j < columns; j++ ){
					
					if( arr[i][j] % 2 == 0 ){
						
						printf("%d ", arr[i][j]);
						
					}
	
				}
				
			}
			
		}
		
		printf("\nDo you wanna continue? \n");
	}
	
	while( 'y' == getch() );
		
	return 0;
	
}

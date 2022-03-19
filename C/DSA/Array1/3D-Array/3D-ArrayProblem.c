#include <stdio.h>
#include <cs50.c>
#include <ctype.h>

int main(void){
	
	int parts = 2;
	
	int row = 5;
		
	int columns = 5;
		
	int arr[2][5][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
		
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
		
	printf("\n");
	
	if( ans == 'A' ){
		
		printf("After appyling algorithm! : ");
			
			for(int i = 0; i < 1; i++){
					
				printf("\n %d %d %d %d %d \n %d %d %d %d %d ", arr[0][0][0], arr[0][1][1], arr[0][2][2], arr[0][3][3], arr[0][4][4], arr[1][0][0], arr[1][1][1], arr[1][2][2], arr[1][3][3], arr[1][4][4] );
				
			}

	}
	
	else if( ans == 'D' ){
			
			printf("\nAfter appyling algorithm! : ");
			
			for(int i = 0; i < 1; i++){
				
				printf("\n %d %d %d %d %d \n %d %d %d %d %d ", arr[0][4][4], arr[0][3][3], arr[0][2][2], arr[0][1][1], arr[0][0][0], arr[1][4][4], arr[1][3][3], arr[1][2][2], arr[1][1][1], arr[1][0][0]);
				
			}
			
		}
		
	printf("\n");
	
	return 0;
}

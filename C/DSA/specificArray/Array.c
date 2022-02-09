#include <stdio.h>

int main(void){
	
	//for specific arrays to be print
	
	int array[10];
	
	printf("enter any 10 elements\n");	
	for(int i = 0; i<10; i++){
		
		scanf("%d", &array[i]); // make sure you didn't give an extra space after %d at there otherwise some error may occur
	}
	// we can remove curly braces after for loop because if we've just single line of code after for loop then we can remove these curly braces
	
	for(int i = 0; i<10; i++){
		printf("%d ", array[i]);
	}
		
	return 0;
}

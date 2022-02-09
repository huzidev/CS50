#include <cs50.c>
#include <string.h>
#include <stdio.h>

// we'll swap the values just like we swap one color liquid from one glass to another glass by a temporary glass or temporary variable
void swap(int *a, int *b);

int main(void){
	
	int x = 1;
	int y = 2;
	printf("Before Swap\n");
	printf("x is %i, y is %i\n", x, y);
	
	printf("After Swap\n");
	swap(&x, &y);
	printf("x is %i, y is %i\n", x, y);
	return 0;
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp; //tmp means temporary
}

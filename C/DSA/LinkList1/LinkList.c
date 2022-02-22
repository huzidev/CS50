#include <stdio.h>

struct code{
	
	int i;
	char c;
	struct code *ptr;
	
};

int main(void){
	
	struct code var1; // now we just created a variable which have all the similar properties as of struct code's data
	struct code var2;
	
	var1.i = 10;
	var1.c = 'H';
	var1.ptr = NULL; // it is a good practice to intitialze pointer to null if we were not assigned it initially	

	var2.i = 20;
	var2.c = 'A';
	var2.ptr = NULL;
	
	var1.ptr = &var2;
	
	printf("%d %c", var1.ptr->i, var1.ptr->c);
}

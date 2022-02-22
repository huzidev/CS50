#include <stdio.h>
#include <cs50.c>

struct code{
	
	int i;
	char c;
	struct code *ptr; // self refrencing ptr
	
};


int main(void){
	
	struct code var1; // just a variable of struct code and we can have acces of all the syntax we make in struct code
 	struct code var2;
	
	var1.i = 10;
	var1.c = 'A';
	var1.ptr = NULL; // it is good practice to asign ptr null initially
	
	var2.i = 20;
	var2.c = 'B';
	var2.ptr = NULL;
	
	var1.ptr = &var2; // ampercand & means (And what is yours address) and we assigned the address of var2 into var1.ptr
	
	printf("%i %c", var1.ptr->i, var1.ptr->c ); // -> means access of 
	
	return 0;
}

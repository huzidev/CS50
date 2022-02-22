#include <stdio.h>
#include <cs50.c>


// void pointer is used for malloc
int main(void){
	
	int n = get_int("Any value : ");

//	int *p = &n;
	
	void *p = &n; // void pointer can take any type of data like there is int data we stored here 
	
//	printf("%d", *p);
	
	printf("%d", *(int*)p); // *outside bracket is for derefrencing and int* is to make ours void pointer to int pointer

	return 0;
}

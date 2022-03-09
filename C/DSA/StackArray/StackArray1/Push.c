#include <stdio.h>
#include <cs50.c>
#define MAX 5

// remeber in case of array we've to assigned size so we can also make isFull function


// GLOBAL VARIABLES
int stack_arr[MAX];

int top = -1; // means initially empty


void push(int data){ // int data will receive the value we'll insert in main function

	if( top == MAX - 1 ){
		
		printf("Stack is full");
		
		return; // so it'll return back to main funciton
		
	}
	
	top = top + 1; // as we knew that in PUSH we'll increment top with top + 1 and in case of POP we'll decremenet top by - 1;
	
	stack_arr[top] = data; // data will receive the value from main function
	
}

void print(){
	
	for( int i = top; i >= 0; i--){
		
		printf("\n");
		
		printf("%d ", stack_arr[i]);
		
	}
}

int main(void){
	
	for(int i = 0; i < MAX; i++){	
		
		int value = get_int("Which value you wanna push? ");
		
		push(value);	
			
	}
	
	print();
	
	return 0;	
}

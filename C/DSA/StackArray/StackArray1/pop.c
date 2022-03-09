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

// we can't return in void until we've used (IF) or something else inside void

int pop(){ // since we've used int so we can return the value that is going to be popped  
	
	int value; // will be assinged to the value that is going to be popped!
	
	if( top == -1 ){
		
		printf("Stack underflow");
		
		exit(1); // exit 0 means successfully exit but exit(1) means some kind of problem in brief abnormal exit
		
	}	
	
	value = stack_arr[top]; // whatever the top element will be because deletion will takes place from top
	
	top = top - 1;
	
	return value; // will be received by value in main function
		
}

// FOR PRINTING IN STRAIGHT MANNER

//void print(){ 
//	
//	for( int i = 0; i < MAX; i++){
//		
//		printf("%d ", stack_arr[i]);
//		
//	}
//	
//}

void print1(){ // remember in popping we didn't actually delete the element rather we create an illusion by ignoring the top value just by simply decrement the top value
	
	for( int i = top; i >= 0; i--){ // since we are starting it from top therefore after printing all values will be reversed because we starts from top means end
		
		printf("%d ", stack_arr[i]);
		
	}
	
}

int main(void){
	
	for(int i = 0; i < MAX; i++){	
		
		int value = get_int("Which value you wanna push? ");
		
		push(value);	
			
	}
	
	int data;
	
	printf("Before popping the elements? : ");
		
	print1();
	
	int n = get_int("\nHow many elements you wanna pop? ");
	
	if( n > MAX ){
		
		printf("Error! ");
		
	}
	
	for(int i = 0; i < n; i++){
		
		data = pop(); // basically data will receive the element that will be POPPED in the function

	}
	
	printf("\nAfter popping the elements! : ");
	
	print1();
	
	return 0;	
}

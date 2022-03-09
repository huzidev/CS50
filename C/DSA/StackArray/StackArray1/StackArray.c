#include <stdio.h>
#include <cs50.c>	
#define MAX 5


int stack_arr[MAX];

int top = -1;


int isFull(){
	
	if( top == MAX - 1 ){ 
		
		return 1; // means full
	 
	}
	else{
		
		return 0; // means not full
		
	}
	
}

int isEmpty(){
	
	if( top == -1 ){ // means empty
		
		return -1;
		
	}
	else{
		
		return 0; // means not full
		
	}
	
}

void push(int data){

	if(isFull()){
		
		printf("Stack Overflow! ");
		
		return;
		
	}
	
	top = top + 1; // in the case of push we simply increment top by top + 1
	
	stack_arr[top] = data; // data will be received (FROM) ours main function
	
	
}


int pop(){ // we use int pop because we've to return 
	
	int value;
	
	if(isEmpty()){
		
		printf("Stack Underflow! ");
		
		exit(1);
	}
	
	value = stack_arr[top];
	
	top = top - 1;
	
	return stack_arr[top];
	
}

int peek(){
	
	if(isEmpty()){
		
		printf("Stack Underflow! ");
		
	}
	
	return stack_arr[top]; // so it'll return value that is at the top
	
}

void print(){
	
	if(isEmpty()){
		
		printf("Stack is empty! ");	
		
		return;
	}
	
	for(int i = top; i >= 0; i--){
		
		printf("%d ", stack_arr[i]);
		
	}
	
}

int main(void){
	
	int val, n;
	
	do{
		printf("\n********** MENU **********");
		printf("\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.PEEK");
		printf("\n4.IS EMPTY");
		printf("\n5.Is Full");
		printf("\n6.Print");
		printf("\n7.EXIT");
		printf("\n. enter yours choice : ");
		n = get_int("");
		
		switch(n){
			case 1:
				printf("\n enter the value : ");
				val = get_int("");
				push(val);
				break;
				
			case 2:
				printf("\n popped element : %d", pop());
				break;
				
			case 3:
				printf("\n top element : %d", peek());
				break;
				
			case 4:
				printf("\n is empty : %d", isEmpty());
				break;
			
			case 5:
				printf("\n is full : %d", isFull());
				break;
				
			case 6:
				print();
				break;
				
			case 7:
				printf("Exit successfully!");
				exit(0);
				break;
				
			default:
				printf("\n wrong choice!");
				break;								
		}
		printf("\n do you wanna continue...");
	}
	while('y' == getch());
}

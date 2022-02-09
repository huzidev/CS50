#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct stack{
	int top;
	
	unsigned size;
	
	int* array;
	
};

struct stack* create(unsigned size){
	
	struct stack* stack = (struct stack*)malloc(sizeof(struct stack));
	
	stack->size = size;
	
	stack->top = -1;
	
	stack->array = (int*)malloc(stack->size * sizeof(int));
	
	return stack;
}

int isFull(struct stack* stack){

	return stack->top == stack->size -1;
	
}

int isEmpty(struct stack* stack){

	return stack->top == -1;
	
}

void push(struct stack* stack, int item){
	
	if(isFull(stack)){
		return;
	}
	stack->array[++stack->top] = item;
}

int pop(struct stack* stack){
	
	if(isEmpty(stack)){
		return -1;
	}
	return stack->array[stack->top--];
}


int peek(struct stack* stack){
	
	if(isEmpty(stack)){
		return INT_MIN;
	}
	return stack->array[stack->top];
}


int main(void){
	int val, n;
	struct stack* stack = create(100);
	do{
		printf("\n********** MENU **********");
		printf("\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.PEEK");
		printf("\n4.IS EMPTY");
		printf("\n5.EXIT");
		printf("\n. enter yours choice : ");
		scanf("%d", &n);
		
		switch(n){
			case 1:
				printf("\n enter the value : ");
				scanf("%d", &val);
				push(stack, val);
				break;
				
			case 2:
				printf("\n popped element : %d", pop(stack));
				break;
				
			case 3:
				printf("\n top element : %d", peek(stack));
				break;
				
			case 4:
				printf("\n is empty : %d", isEmpty(stack));
				break;
				
			case 5:
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

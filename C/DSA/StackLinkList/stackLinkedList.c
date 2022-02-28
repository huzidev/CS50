#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cs50.c>

struct node{
	
	int data;
	
	struct node *next;
	
}*head, *tmp;
	
// PROTOTYPES
void insert(int data);
void ldelete();
void display();
void isEmpty();


void insert(int data){
	
	tmp = (struct node*)malloc(sizeof(struct node));
	
	tmp->data = data;
	
	if( head == NULL ){
		
		tmp->next = NULL;
		
	}
	else{
		
		tmp->next = head; // initially head will be equal to null until we assigned head = tmp;
		
	}
	
	head = tmp; // so when we created a new node the head part will also update as well with new node
	
}

void ldelete(){
	
	tmp = head; // so tmp and head will points towards the node we wanna delete
	
	if( head == NULL ){
		
		printf("\n no element to be deleted!");
		
	}
	else{
		
		printf("\n element deleted - %d", head->data);
		head = head->next;
	}
}

void isEmpty(){
	
	if( head == NULL ){
		
		printf("\n stack is empty");
		
	}
	
	else{
		
		printf("\n stack is not empty");
		
	}
}

void display(){
	
	tmp = head;
	
	if( head == NULL ){
		
		printf("EMPTY STACK! no elements is available");
		
	}
	else{
		
		while(tmp != NULL){
			
			printf("\n %d", tmp->data);
			
			tmp = tmp->next;
			
		}
	}
}

int main(void){
	
	int val, n;	
	do{
		printf("\n********** MENU **********");
		printf("\n1.PUSH");	
		printf("\n2.POP");
		printf("\n3.IS EMPTY");
		printf("\n4.DISPLAY");
		printf("\n5.EXIT");
		printf("\n Enter Yours Choice : ");
		n = get_int("");
		
		switch(n){
			case 1:
				printf("\n Enter the value : ");
				val = get_int("");
				insert(val);
				break;		
			
			case 2:
				ldelete();
				break;
				
			case 3:
				isEmpty();
				break;
				
			case 4:
				display();
				break;
			
			case 5:
				exit(0);
				break;
				
			default:
				printf("\n wrong choice!");
				break;
				
		}
		printf("\n do you wanna continue");
	}
	while('y' == getch());
	return 0;
}


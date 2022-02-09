#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
	
	int data;
	
	struct node *next;
	
}*p, *tmp, *tmp1, *end;
	
// PROTOTYPES
void insert(int);
void display();
void ldelete();
void isEmpty();


int main(void){
	
	int val, n;	
	p = NULL;
	do{
		printf("\n********** MENU **********");
		printf("\n1.PUSH");	
		printf("\n2.POP");
		printf("\n3.IS EMPTY");
		printf("\n4.DISPLAY");
		printf("\n5.EXIT");
		printf("\n Enter Yours Choice : ");
		scanf("%d", &n);
		
		switch(n){
			case 1:
				printf("\n Enter the value : ");
				scanf("%d", &val);
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
}

void insert(int ele){
	tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = ele;
	
	if( p == NULL){
		tmp->next = NULL;
	}
	else{
		tmp->next = p;
	}
	p = tmp;
}

void ldelete(){
	tmp = p;
	if( p == NULL){
		printf("\n no element to be deleted!");
	}
	else{
		printf("\n element deleted - %d", p->data);
		p = p->next;
	}
}

void isEmpty(){
	if( p == NULL){
		printf("\n stack is empty");
	}
	else{
		printf("\n stack is not empty");
	}
}

void display(){
	
	tmp = p;
	while(tmp != NULL){
		printf("\n %d", tmp->data);
		tmp = tmp->next;
	}
}

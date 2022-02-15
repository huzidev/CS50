#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
	
	int data;
	
	struct node *next;
}*p, *tmp, *tmp1;


// PROTOTYPES
void insert_end(int);
void delete_beg();
void display();
void isEmpty();



void insert_end(int ele){
	
	tmp = p;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->data = ele;
	
	tmp1->next = NULL;
	
	if( p == NULL ){
		
		p = tmp1;
	
	}
	
	else{
		while( tmp->next != NULL){
			
			tmp = tmp->next;
			
		}
		tmp->next = tmp1;
	} 
}


void isEmpty(){
	
	if( p == NULL ){
		
		printf("\n Queue is empty");
		
	}
	else{
		
		printf("\n Queue is not empty");
		
	}
	
}

void delete_beg(){
	
	tmp = p; 
	
	if( p == NULL){
		
		printf("\n no elements can be delete");
		
	}
	else{
		
		printf("\n element delete - %d", p->data);
		p = p->next;
		
	}
}

void display(){
	
	tmp = p;
	if( p == NULL){
		printf("empty array!");
	}
	else{
		while( tmp != NULL){
		
			printf("\n %d", tmp->data);
			tmp= tmp->next;
		
		}
	}
}
int main(void){
	
	int val, n;
	p = NULL;
	
	do{
		printf("\n********** MENU **********");
		printf("\n1.ENQUEUE");
		printf("\n2.DEQUEUE");
		printf("\n3.IS EMPTY");
		printf("\n4.DISPLAY");
		printf("\n5.EXIT");
		printf("\n enter yours choice : ");
		scanf("%d", &n);
		
		switch(n){
			
			case 1:
				printf("\n enter value : ");
				scanf("%d", &val);
				insert_end(val);
				break;
			
			case 2:
				delete_beg();
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
		printf("\n do you wanna continue...");
	}
	while('y' == getch());
}

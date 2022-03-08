#include <stdio.h>
#include <cs50.c>


struct node{
	
	int data;
	
	struct node *next;
	
}*head, *tmp, *tmp1;


// PROTOTYPES
void insert_end(int data);
void display();
void del();
void isEmpty();



void insert_end(int data){
	
	struct node *tmp1 = NULL;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->data = data;
	
	tmp1->next = NULL;
	
	if( head == NULL ){	
		
		head = tmp1;
		
		tmp = head;
	}
	else{
	
		tmp->next = tmp1;
		
		tmp = tmp1;
		
	}
	
}


void isEmpty(){
	
	if( head == NULL ){
		
		printf("\n Queue is empty");
		
	}
	else{
		
		printf("\n Queue is not empty");
		
	}
	
}

void del(){
	
	tmp = head; 
	
	if( head == NULL){
		
		printf("\n no elements can be delete");
		
	}
	else{
		
		printf("\n element delete - %d", head->data);
		head = head->next;
		
	}
}

void display(){
	
	tmp = head;
	if( head == NULL){
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
	
	do{
		printf("\n********** MENU **********");
		printf("\n1.ENQUEUE");
		printf("\n2.DEQUEUE");
		printf("\n3.IS EMPTY");
		printf("\n4.DISPLAY");
		printf("\n5.EXIT");
		printf("\n enter yours choice : ");
		n = get_int("");
		
		switch(n){
			
			case 1:
				printf("\n enter value : ");
				val = get_int("");
				insert_end(val);
				break;
			
			case 2:
				del();
				break;
				
			case 3:
				isEmpty();
				break;
				
			case 4:
				display();
				break;
			
			case 5: 
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

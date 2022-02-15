#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


struct node{
	int data;
	
	struct node* next; // *next becasue start (Asterisk) sign is used for pointer and next part of node just works as pointer for next node
}*p, *tmp, *tmp1;

// PROTOTYPES
void insert_beg(int);
void insert_end(int);
void delete(int);
void display();


void insert_beg(int ele){
	
	tmp = p;
	tmp1 = (struct node*)malloc(sizeof(struct node));
	tmp1->data = ele;
	tmp1->next = p;
	p = tmp1;
	
}

void insert_end(int ele){
	
	tmp = p;
	tmp1 = (struct node*)malloc(sizeof(struct node));
	tmp1->data = ele;
	tmp1->next = NULL; //bcz at end there will be NULL after the last node
	
	
	if ( p == NULL ){ // we use if conditon in insert_end becasue what if P is completely empty and user tried to insert value at end	
		p = tmp1;
	}
	else{
		while(tmp->next != NULL){ // we didn't wrote tmp->data coz data can be any value even 0 which is NULL value
			tmp = tmp->next;
		}
		tmp->next = tmp1;
	}
}


void delete_beg(){
	
	tmp = p;
	
	if( p == NULL ){
		printf("\n no element to be deleted!");
	}
	else{
		printf("\n element deleted - %d", p->data); //p->data means the data (value) we deleted
		p = p->next; // since we delete from beg hence now points towards next node
	}
}

void delete_end(){
	
	tmp = p;
	
	struct node* pre; // in case the last elements next isn't null
	
	if( p ==  NULL){
		printf("\n no element to be deleted");
	}
	else if(p->next == NULL){
		printf("\n element deleted - %d", p->data);
		p = NULL; // since we delete from end now points towards NULL
	}
	else{
		while(tmp->next != NULL){
			pre = tmp;
			tmp = tmp->next;
		}
		printf("\n element deleted - %d", tmp->data);
		pre->next = NULL;
	}
}


void display(){
	
	tmp = p;
	
	if( p == NULL ){
		
		printf("LIST EMPTY! no element is available to be view\n");
		
	}
	while(tmp != NULL){
		printf("\n %d", tmp->data);
		tmp = tmp->next;
	}
}

int main(void){
	int val, n;
	p = NULL;
	
	do{
		printf("\n.********** MENU **********");
		printf("\n1. INSERT AT BEG");
		printf("\n2. INSERT AT END");
		printf("\n3. DELETE FROM BEG");
		printf("\n4. DELETE FROM END");
		printf("\n5. DISPLAY");
		printf("\n6. EXIT");
		printf("\n Enter yours chouice : ");
		scanf("%d", &n);
	
		switch(n){
			
			case 1:
				printf("\n Enter the value : ");
				scanf("%d", &val);
				insert_beg(val);
				break;
			
			case 2:
				printf("\n Enter the value : ");
				scanf("%d", &val); 
				insert_end(val);
				break;
				
			case 3:
				delete_beg();
				break;
			
			case 4:
				delete_end();
				break;
				
			case 5:
				display();
				break;
				
			case 6:
				exit(0);
				break;
				
			default:
				printf("\n wrong choice!");
				break;
		}
		printf("\n do you wanna continue... ");
	}
	while('y' == getch()); //getch() pauses the Output Console until a specific key we assigned is pressed
	
	return 0;
}

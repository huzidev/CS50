#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cs50.c>

struct node{
	struct node *prev;
	
	int data;
	
	struct node *next; // *next becasue start (Asterisk) sign is used for pointer and next part of node just works as pointer for next node
}*head, *tmp, *tmp1;

// PROTOTYPES
void insert_beg(int data);
void insert_end(int data);
void delete(int);
void display();


void insert_beg(int data){
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->prev = NULL;
	
	tmp1->data = data;
	
	if( head == NULL ){
		
		tmp1->next = head; // THIS PART IS REALLY IMP BECAUSE WHEN WE WANNA INSERT ANOTHER ELEMENT IN THE BEG WE'VE TO MAKE SURE THAT NEW ELEMENT IN THE BEG HAVE ADDRESS OF OLD NEW NODE
		
		
	}
	
	else{
		
		tmp1->next = head;
		
		head->prev = tmp1;
		
		
	}
	
	head = tmp1;
}

void insert_end(int data){
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->prev = NULL;
	
	tmp1->data = data;
	
	tmp1->next = NULL; //bcz at end there will be NULL after the last node
	
	tmp = head;
	
	
	if ( head == NULL ){ // we use if conditon in insert_end becasue what if P is completely empty and user tried to insert value at end	
	
		head = tmp1;
		
		head->next = NULL;
		
		head->prev = NULL;
		
		tmp = head;
	}
	
	else{
		
		while( tmp->next != NULL ){ // we didn't wrote tmp->data coz data can be any value even 0 which is NULL value
			
			tmp = tmp->next;
		
		}
		
		tmp->next = tmp1;
		
		tmp1->prev = tmp;
		
//		head = tmp1;
	}
}


void delete_beg(){
	
	tmp = head; // so the new address of head will be printed in the tmp as well.
	
	if( head == NULL ){
		printf("\n no element to be deleted!");
	}
	else{
		printf("\n element deleted - %d", tmp->data); //p->data means the data (value) we deleted
		head = head->next; // since we delete from beg hence now points towards next node
		free(tmp);
		tmp = head;
	}
}

void delete_end(){
	
	tmp = head; // make sure to assigned this at top in this case delete at end
	
	struct node* pre; // in case the last elements next isn't null
	
	if( head ==  NULL){
		printf("\n no element to be deleted");
	}
	else if(head->next == NULL && head->prev == NULL){
		printf("\n element deleted - %d", head->data);
		free(head); // once we freed(head) the node will be deleted but head will still have the address therefore we've to assign head = NULL
		head = NULL; // since we delete from end now points towards NULL
		
	}
	else{
		while(tmp->next != NULL){
			tmp = tmp->next;
			pre = tmp->prev;
		}
		printf("\n element deleted - %d", tmp->data);
		free(tmp);
		tmp = NULL;
		pre->next = NULL;
	}
}


void display(){
	
	tmp = head;
	
	if( head == NULL ){
		
		printf("LIST EMPTY! no element is available to be view\n");
		
	}
	
	while(tmp != NULL){
		printf("\n %d", tmp->data);
		tmp = tmp->next;
	}
}

int main(void){
	int val, n;
	 
	do{
		printf("\n.********** MENU **********");
		printf("\n1. INSERT AT BEG");
		printf("\n2. INSERT AT END");
		printf("\n3. DELETE FROM BEG");
		printf("\n4. DELETE FROM END");
		printf("\n5. DISPLAY");
		printf("\n6. EXIT");
		printf("\n Enter yours chouice : ");
		n = get_int("");
	
		switch(n){
			
			case 1:
				printf("\n Enter the value : ");
				val = get_int("");
				insert_beg(val);
				break;
			
			case 2:
				printf("\n Enter the value : ");
				val = get_int(""); 
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
				printf("Exit successfully!");
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

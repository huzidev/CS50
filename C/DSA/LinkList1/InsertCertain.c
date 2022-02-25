#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

struct node{
	
	int data;
	
	struct node *next;
	
};


int main(void){
	
	int data;
	
	struct node *head = NULL;
	
	head = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("element you wanna insert : ");
	
	head->data = data;
	
	head->next = NULL;
	
	
	struct node *temp = NULL;
	
	temp = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("element you wanna insert : ");
	
	temp->data = data;
	
	temp->next = NULL;
	
	head->next = temp;
	
	
	
	struct node *temp1 = NULL;
	
	temp1 = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("element you wanna insert : ");
	
	temp1->data = data;
	
	temp1->next = NULL;
	
	temp->next = temp1;
	
	
	data = 90;
	
	int pos = get_int("at which position you wanna insert the certain element\n");
	
	if( pos > 4 || pos <= 1 ){
		
		printf("you've to select a position between 1 to 4");
		
	}	
	else{
		
		add_at_pos(head, data, pos);
		
		struct node *ptr = NULL;
		
		ptr = head;
		
		while(ptr != NULL){
			
			printf("%d ", ptr->data);
			ptr = ptr->next;
			
		}
	}
	
	return 0;
}



void add_at_pos(struct node *head, int data, int pos){

	struct node *ptr = NULL;
	
	ptr = head;
	
	struct node *ptr2 = NULL;
	
	ptr2 = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("element you wanna insert at certain pos : ");
	
	ptr2->data = data;
	
	ptr2->next = NULL;

	pos--;

	while(pos != 1){
		
		ptr = ptr->next;
		pos--;
		
	}
	
	ptr2->next = ptr->next;
	ptr->next = ptr2;
}






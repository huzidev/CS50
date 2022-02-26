#include <stdio.h>
#include <cs50.c>
#include <stdlib.h>

struct node {
	
	int data;
	struct node *next;
};


// for DELETION we've to make double pointers for head becuse another pointer will points towards head and head will points towards ours first node
int main(void){
	
	int data;
	
	struct node *head = NULL;
	
	head = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("Which element you wanna insert in first list? ");
	
	head->data = data;
	
	head->next = NULL;
	
	
	struct node *first = NULL;
	
	first = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("Which element you wanna insert in second list? ");
	
	first->data = data;
	
	first->next = NULL;
	
	head->next = first;
	

	struct node *sec = NULL;
	
	sec = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("Which element you wanna insert in third list? ");
	
	sec->data = data;
	
	sec->next = NULL;
	
	first->next = sec;
	
	delete_last(&head);
	
	struct node *ptr = NULL;
	
	ptr = head;
	
	while( ptr != NULL ){
		
		printf("%d ", ptr->data);
		ptr = ptr->next;
		
	}
	
	return 0;
}

void delete_last(struct node **head){
	
	if ( *head == NULL ){
		
		printf("list is empty");
		
}
	
	else{
		
		struct node *temp = NULL;
		struct node *temp1 = NULL;
		
		temp = *head; // one pointer will points toward the node that have to be deleted and other pointer will be just before the pointer that have to be deleted so we can update the NEXT part of that node
		temp1 = *head;
		
		while( temp->next != NULL ){
		
			temp1 = temp;
			temp = temp->next;
			
		}
		
		temp1->next = NULL;
		free(temp);
		temp = NULL;
	}
	return head;
	
	
}


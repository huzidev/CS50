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
	
	del_beg(&head);
	
	struct node *ptr = NULL;
	
	ptr = head;
	
	while( ptr != NULL ){
		
		printf("%d ", ptr->data);
		ptr = ptr->next;
		
	}
	
	return 0;
}


void del_beg(struct node **head){ // therefore we've used ** asterisk sign here
	
	struct node *temp = NULL;
		
	temp = *head;
		
	*head = temp->next;
		
	free(temp);
		
	temp = NULL;	
	
}

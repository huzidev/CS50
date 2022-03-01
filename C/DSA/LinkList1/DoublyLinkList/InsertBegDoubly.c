#include <stdio.h>
#include <cs50.c>
#include <stdlib.h>


struct node{
	
	struct node *prev;
	
	int data;
	
	struct node *next;
	
}*head, *tmp1;

struct node* addToEmpty(struct node *head){
	
	int data;
	
	struct node *tmp1 = NULL;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->prev = NULL;
	
	data = get_int("Element you wanna insert in doubly link list : ");
	
	tmp1->data = data;
	
	tmp1->next = NULL;
	
	head = tmp1;
	
	return head;
}

struct node* AddAtBeg(struct node *head){
	
	int data;
	
	struct node *tmp1 = NULL;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->prev = NULL;
	
	data = get_int("Element you wanna insert at beg : ");
	
	tmp1->data = data;
	
	tmp1->next = NULL;
	
	tmp1->next = head;
	
	head->prev = tmp1;
	
	head = tmp1;
	
	return head;
	
}

int main(void){
	
	struct node *head = NULL;
	
	head = addToEmpty(&head);
	
	struct node *ptr;
	
	head = AddAtBeg(head);
	
	ptr = head;
		
	while( ptr != NULL){
		
		printf("%d ", ptr->data);
		ptr = ptr->next;
		
	}

	return 0;
}

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
	
	data = get_int("Value1 : ");
	
	head->data = data;
	
	head->next = NULL;
	
	
	struct node *temp = NULL;
	
	temp = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("Value2 : ");
	
	temp->data = data;
	
	temp->next = NULL;
	
	head->next = temp;
	
	
	struct node *ptr = NULL;
	
	ptr = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("element you wanna insert at beg? ");
	
	ptr->data = data;
	
	ptr->next = head; // when we insert new node at beg the next part the link part will store the address of next node which was first node before
		
	head = ptr; // so whatever the address of ptr is will now be assigned to head so head will points towards THE NEW node 
// because head always points towards the first node	
	ptr = head;
	
	while(ptr != NULL){
		
		printf("%d ", ptr->data);
		ptr = ptr->next;
		
	}
	
	return 0;
	
}


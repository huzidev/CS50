#include <stdio.h>
#include <cs50.c>
#include <stdlib.h>
struct node{
	
	int data;
	struct node *next;
	
};

int main(void){
	int data;
	
	struct node *head = NULL;
	head = (struct node*)malloc(sizeof(struct node));
	
	struct node *current = NULL;
	current = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("element1: ");
	head->data = data;
	head->next = NULL;
	
	data = get_int("element2: ");
	current->data = data;
	current->next = NULL;
	head->next = current;
	
	struct node *ptr = NULL;
	ptr = head;
	
	head = add_at_end(head, 50);
	
	while(ptr != NULL){
		
		printf("%d ", ptr->data);
		ptr = ptr->next;
		
	}
	return 0;
}


void add_at_end(struct node *head, int data){
	
	struct node *ptr, *temp;
	
	ptr = head;
	
	temp = (struct node*)malloc(sizeof(struct node));
	data = get_int("Element you wanna insert in the end? ");
	temp->data = data;
	temp->next = NULL;
	
	while(ptr->next != NULL){ // so ptr will iterate until ptr->link is NULL as ptr->link is NULL means we were at last node
// since we wanted the insertion at last node therefore ptr->next = temp; the address of temp will assigned to ptr->next and node will be STITCHED ovet their the last node
		ptr = ptr->next;	
	}
	ptr->next = temp;
	
	return head;
}

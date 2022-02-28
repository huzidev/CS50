#include <stdio.h>
#include <cs50.c>
#include <stdlib.h>


// becasue in doubly link list we've 3 parts in a single node a prev part data part and next part
struct node {
	
	struct node *prev;
	
	int data;
	
	struct node *next;
	
};


struct node* add_at_pos(struct node *head, int data, int pos){
	
	struct node *temp = NULL;
	
	struct node *prev = NULL;
	
	struct node *next = NULL;
	
	temp->next = next;
	
	data = get_int("ele? ");
	
	temp->data = data;
	
	temp->prev = prev;
	
	return head;
	
	
}

int main(void){
	
	int data;
	
	
	struct node *head = NULL;
	
	head = (struct node*)malloc(sizeof(struct node));
	
	head->prev = NULL;
	
	data = get_int("Element you wanna insert? ");
	
	head->data = data;
	
	head->next = NULL;
		
	
	struct node *first = NULL;
	
	first = (struct node*)malloc(sizeof(struct node));
	
	first->prev = head;
	
	data = get_int("Element you wanna insert at sec? ");
	
	first->data = data;
	
	first->next = NULL;
	
	head->next = first;


	struct node *sec = NULL;
	
	sec = (struct node*)malloc(sizeof(struct node));
	
	sec->prev = first;
	
	data = get_int("Element you wanna insert at third? ");
	
	sec->data = data;
	
	sec->next = NULL;
	
	first->next = sec;


	int location = get_int("At which position you wanna insert new node? ");
	
	int pos = location;
	
	head = add_at_pos(head, data, pos);
	
	struct node *ptr = NULL;
	
	ptr = head;
	
	while(ptr != NULL){
		
		printf("%d ", ptr->data);
		
		ptr = ptr->next;
		
	}
	
	return 0;
}



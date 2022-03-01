#include <stdio.h>
#include <cs50.c>
#include <stdlib.h>


// becasue in doubly link list we've 3 parts in a single node a prev part data part and next part
struct node {
	
	struct node *prev;
	
	int data;
	
	struct node *next;
	
};


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


	struct node *ptr = NULL;
	
	ptr = head;
	
	while(ptr != NULL){
		
		printf("%d ", ptr->data);
		
		ptr = ptr->next;
		
	}
	
	return 0;
}



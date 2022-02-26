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
	
	int location;
	
	location = get_int("At which position you wanna delete element? ");
	
	int pos = location;

	del_pos(&head, pos);
	
	struct node *ptr = NULL;
	
	ptr = head;
	
	while( ptr != NULL ){
		
		printf("%d ", ptr->data);
		ptr = ptr->next;
		
	}
	return 0;
}

void del_pos(struct node **head, int pos){
	
	struct node *current = NULL;
	struct node *prev = NULL;
	
	current = *head;
	prev = *head;
	
	if( *head == NULL ){
		
		printf("List is empty");
		
	}
	
	else if( pos == 1 ){ // pos 1 means first node of list
	
		*head = current->next;
		
		free(current);
		current = NULL;
		
	
	}
	
	else{
		
		while( pos != 1){
			
			prev = current;
			
			current = current->next;
			
			pos--;
		}
		prev->next = current->next;
		
		free(current);
		
		current = NULL;
		
	}
	
}

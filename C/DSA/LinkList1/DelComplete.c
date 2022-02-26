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

	del_comp(&head);	

	if(head == NULL){
		
		printf("List deleted successfilly! ");
		
	}
	return 0;
}

void del_comp(struct node **head){
	
	struct node *temp = NULL;
	
	temp = *head;
	
	while(temp != NULL){
		
		temp = temp->next;
		free(*head);
		*head = temp;
		
	}

}

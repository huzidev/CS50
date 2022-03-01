#include <stdio.h>
#include <cs50.c>
#include <stdlib.h>


struct node{
	
	struct node *prev;
	
	int data;
	
	struct node *next;
	
}*head, *tmp, *tmp1;

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

struct node* AddAtEnd(struct node *head){
	
	int data;
	
	struct node *tmp1 = NULL;
	
	struct node *tmp = NULL;
	
	tmp = head;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->prev = NULL;
	
	data = get_int("Element you wanna insert at End : ");
	
	tmp1->data = data;
	
	tmp1->next = NULL;
	
	while(tmp->next != NULL){
		
		tmp = tmp->next;
		
	}
	
	tmp1->prev = tmp;
	
	tmp->next = tmp1;
	
	return head;
	
}

struct node* AddAtPos(struct node *head, int pos){
	
	int data;
	
	struct node *tmp1 = NULL;
	
	struct node *tmp = NULL;
	
	struct node *tmp2 = NULL; // tmp2 is baically for updating the next part of new NODE
	
	tmp = head;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->prev = NULL;
	
	data = get_int("Element you wanna insert at %dth position : ", pos);
	
	tmp1->data = data;
	
	tmp1->next = NULL;
	
	while( !(pos <= 2 ) ){ // means doesn't less than equal to
		
		tmp = tmp->next;
		
		pos --; // most imp step;
		
	}
	if( tmp->next == NULL ){
		
		tmp->next = tmp1;
		
		tmp1->prev = tmp;
		
		tmp1->next = NULL;
		
	}
	
	else if( tmp->prev == NULL ){
		
		tmp1->next = tmp;
		
		tmp1->prev = NULL;
		
		tmp->prev = tmp1;
		
		head = tmp1;
		
	}
	
	else{
		tmp2 = tmp->next; // so no matter where ours tmp stop tmp2 will always be the next node of ours tmp so tmp2 will update the next part of new node that have to be insert
		
		tmp->next = tmp1;
		
		tmp1->prev = tmp;
		
		tmp1->next = tmp2;
		
		tmp2->prev = tmp1;
	}
	
	return head;
}

int main(void){
	
	struct node *head = NULL;
	
	head = addToEmpty(head);
	
	head = AddAtBeg(head);

	head = AddAtEnd(head);
	
	int location = get_int("At Which Position You wanna insert new node? ");
	
	if( location < 0 || location > 4 ){
		
		printf("You've to choose location bw 0 to 4 !");	
		
	}

	else{
		
		int pos = location;
	
		head = AddAtPos(head, pos);
	
		struct node *ptr;
		
		ptr = head;
			
		while( ptr != NULL){
			
			printf("%d ", ptr->data);
			ptr = ptr->next;
			
		}
	}

	return 0;
}

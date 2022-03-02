#include <stdio.h>
#include <cs50.c>
#include <stdlib.h>


struct node{
	
	struct node *prev;
	
	int data;
	
	struct node *next;
	
}*head, *tmp, *tmp1;

struct node* addToEmpty(struct node *head, int data){
	
	struct node *tmp1 = NULL;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->prev = NULL;
	
	tmp1->data = data;
	
	tmp1->next = NULL;
	
	head = tmp1;
	
	return head;
}


struct node* AddAtEnd(struct node *head, int data){
	
	struct node *tmp1 = NULL;
	
	struct node *tmp = NULL;
	
	tmp = head;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->prev = NULL;
		
	tmp1->data = data;
	
	tmp1->next = NULL;
	
	while(tmp->next != NULL){
		
		tmp = tmp->next;
		
	}
	
	tmp1->prev = tmp;
	
	tmp->next = tmp1;
	
	return head;
	
}

struct node* CreateManual(struct node *head){
	
	int n = get_int("How many node you wanna create? ");
	
	if( n == 0 ){
		
		return head; // means user didn't entered an appropriate value therefore simply return head
		
	}
	
	int data = get_int("Which element you wanna insert in node 1st? ");
	
	head = addToEmpty(head, data);
	
	for(int i = 1; i < n; i++){
		
		data = get_int("Which element you wanna insert at %dth node", i+1);
		
		head = AddAtEnd(head, data);
		
	}
	
	return head;
}


int main(void){
	
	struct node *head = NULL;
	
	head = (struct node*)malloc(sizeof(struct node));
	
	head = CreateManual(head);
	
	struct node *ptr = NULL;
	
	ptr = head;
	
	while(ptr != NULL){
		
		printf("%d ", ptr->data);
		
		ptr = ptr->next;
		
	}
	
	return 0;
}


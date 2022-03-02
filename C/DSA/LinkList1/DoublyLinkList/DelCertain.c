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
		
		return NULL; // means user didn't entered an appropriate value therefore simply return head
		
	}
	
	int data = get_int("Which element you wanna insert in node 1st? ");
	
	head = addToEmpty(head, data);
	
	for(int i = 1; i < n; i++){
		
		data = get_int("Which element you wanna insert at %dth node ", i+1);
		
		head = AddAtEnd(head, data);
		
	}
	
	return head;
}

struct node* DelFirst(struct node *head){
	
	tmp = head;
	
	head = head->next;
	
	free(tmp);
	
	tmp = NULL;
	
	head->prev = NULL;
	
	return head;
	
}

struct node* DelLast(struct node *head){
	
	struct node *tmp2 = NULL;
	
	tmp = head;
	
	tmp2 = tmp;	
	
	while( tmp->next != NULL ){
		
		tmp = tmp->next;
		
	}
	
	tmp2 = tmp->prev;
	
	tmp2->next = NULL;
	
	free(tmp);
	
	tmp = NULL;
	
	return head;
}

struct node* DelCertain(struct node *head){
	
	tmp = head;
	
	int location = get_int("At which position you wanna delete node? ");
	
	int pos = location;
	
	struct node *tmp2 = NULL;
	
	struct node *tmp3 = NULL;
	
	if( pos < 1 ){
		
		printf("You can't delete element below position 1 ");
		
	}
	
	if( pos == 1 ){
		
		head = DelFirst(head); 
		
		return head;
	}
	
	while( pos >= 2 ){
		
		tmp = tmp->next;
		pos--;
		
	}
	
	if( tmp->next == NULL ){
		
		head = DelLast(head);
		
	}
	
	else{
		
		tmp2 = tmp->prev;
		
		tmp3 = tmp->next;
		
		tmp2->next = tmp3;
		
		tmp3->prev = tmp2;
		
		free(tmp);
		
		tmp = NULL;
	
	}
	
	return head;
	
}

int main(void){
	
	struct node *head = NULL;
	
	head = (struct node*)malloc(sizeof(struct node));
	
	head = CreateManual(head);
	
	head = DelCertain(head);
	
	struct node *ptr = NULL;
	
	ptr = head;
	
	while(ptr != NULL){
		
		printf("%d ", ptr->data);
		
		ptr = ptr->next;
		
	}
	
	return 0;
}


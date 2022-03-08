#include <stdio.h>
#include <cs50.c>

struct node{
	
	int data;
	
	struct node *next;
	
};

struct node* AddAtEmpty(struct node *head){
	
	int data;
	
	struct node *tmp1 = NULL;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("Element for beg? ");
	
	tmp1->data = data;
	
	tmp1->next = NULL;
	
	return tmp1;
	
}

struct node* AddAtEnd(struct node *head){
	
	int data;
	
	struct node *tmp1 = NULL;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("Element for end? ");
	
	tmp1->data = data;
	
	tmp1->next = NULL;
	
	struct node *tmp = NULL;
	
	tmp = head;
	
	while(tmp->next != NULL){
		
		tmp = tmp->next;
		
	}
	
	tmp->next = tmp1;
	
	return head;
	
}

struct node* insert(struct node *head, int data){
	
	struct node *tmp = NULL;
	
	struct node *tmp1 = NULL;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->data = data;
	
	tmp1->next = NULL;
	
	int key = tmp1->data; // so the value we wanted to insert will be assigned to varaible key
	
	if( head == NULL || key < tmp1->data ){ // for insertion at beg or when node is empty
		
		tmp1->next = tmp1;
		
		head = tmp1; // so we'll assigned new position to head node when we insert at beg
		
	}
	else{
		
		tmp = head;
		
		while( tmp->next != NULL && tmp->next->data < key ){
			
			tmp = tmp->next;
			
		}
		
		tmp1->next = tmp->next;
		
		tmp->next = tmp1;
	}
	return head;
}

void print(struct node *head){
	
	struct node *tmp = NULL;	

	tmp = head;
	
	while( tmp != NULL ){
		
		printf("%d ", tmp->data);
		
		tmp = tmp->next;
	
	}
	
}

int main(void){
	
	struct node *head = NULL;
	
	head = AddAtEmpty(head);
	
	for(int i = 0; i < 3; i++){ // so ours add at end runs 3 times
	
		head = AddAtEnd(head);
	
	}
	
	head = insert(head, 75);
	
	print(head);
	
	return 0;
}

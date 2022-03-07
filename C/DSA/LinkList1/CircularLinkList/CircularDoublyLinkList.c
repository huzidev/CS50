#include <stdio.h>
#include <cs50.c>

struct node{
	
	struct node *prev;
	int data;
	struct node *next;
};


struct node* AddAtEmpty(struct node *tail){
	
	int data;
	
	struct node *tmp1 = NULL;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	tmp1->prev = tmp1; // because we are in circular doubly link list
	
	data = get_int("Which element you wanna insert at empty list? ");
	
	tmp1->data = data;
	
	tmp1->next = tmp1;
	
	return tmp1; // make sure to return tmp1 in case of circular singly or circular doubly so in main function tail will received it and became last node

}

struct node* AddAtBeg(struct node *tail){
	
	int data;
	
	struct node *tmp1 = NULL;
	
	if( tail == NULL ){
		
		return tmp1;
	
	}
	else{
		
		struct node *tmp1 = (struct node*)malloc(sizeof(struct node));
		
		tmp1->prev = tail;
		
		tmp1->data = get_int("Which element you wanna insert at beg? ");
		
		tmp1->next = tail;
		
		tail->prev = tmp1; // so tail's prev part will points at last node since we just have insert a single ndoe before tail
		
		tail->next = tmp1; // and next part should also points at first node since we were in circular link list
		
		return tail;
	}
		
}

void print(struct node *tail){
	
	if( tail == NULL ){
		
		printf("List is empty!");
		
	}
	else{
		
		struct node *ptr = tail->next; // so ptr will points at first ever node since tail->next stores first nodes address
		
		do{
			printf("%d ", ptr->data);
			
			ptr = ptr->next;
			
		}while( ptr != tail->next );
	}
	
}

int main(void){
	
	struct node* tail = NULL;
	
	tail = AddAtEmpty(tail); // means when list is empty
	
	tail = AddAtBeg(tail);
	
	print(tail);
	
	return 0;
	
}

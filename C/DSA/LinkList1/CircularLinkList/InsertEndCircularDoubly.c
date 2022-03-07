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

struct node* AddAtEnd(struct node* tail){
	
	int data;
	
	struct node* tmp1 = NULL;
	
	if( tail == NULL ){
		
		return tmp1;
		
	}
	
	else{
		
		struct node* first = NULL; // this pointer will points at first node
		
		first = tail->next; // tail->next is first node hence ours (FIRST) pointer will points at first node BUT WHY	
		// is because when we wanted to update the next part of new last node we've to update next part of that last node as well
		// therefore we created first = tail->next so when we've hundreds of node we can simply have the access of first node
		
		tmp1 = (struct node*)malloc(sizeof(struct node));
		
		tmp1->prev = tail; // since we are adding node at end
		
		data = get_int("Which element you wanna insert at end? ");
		
		tmp1->data = data;
		
		tmp1->next = first; // so tmp1->next mens last node next points at first node
		
		tail->next = tmp1; // since we've updated last node means there is another node after ours tail
		
		tail = tmp1; // to update tail's location
		
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
	
	tail = AddAtEnd(tail);
	
	print(tail);
	
	return 0;
	
}

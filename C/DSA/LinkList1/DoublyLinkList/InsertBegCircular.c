#include <stdio.h>
#include <cs50.c>
#include <stdlib.h>

struct node{
	
	int data;
	
	struct node *next;

}*tail, *temp1;

struct node* AddToEmpty(int data){
	
	struct node *temp1 = NULL;
	
	temp1 = (struct node*)malloc(sizeof(struct node));

	data = get_int("Element1 ");
	
	temp1->data = data;
	
	temp1->next = temp1; // so first nodes next part is of same address as of first node it self
	
	return temp1; // basically we'll not reutrn tail specifically but temp1 so in main function ours tail will take temp1 
	
}

struct node* AddAtBeg(struct node *tail, int data){
	
	struct node *newP = NULL;
	
	newP = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("Element2 ");
	
	newP->data = data;
	
	newP->next = tail->next; // it is mandatory to use tail->next here instead of tail becuase it'll helps us when we have hundred of nodes
	
	tail->next = newP;
	
	return tail;
}


void print(struct node *tail){
	
	struct node *ptr = NULL;
	
	ptr = tail->next;
	
	do{
		
		printf("%d ", ptr->data);
		
		ptr = ptr->next;
		
	}while( ptr != tail->next);
	
}

int main(void){
	
	int data;
	
	struct node *tail = NULL;
	
	tail = AddToEmpty(data);
	
	tail = AddAtBeg(tail, data);
	
	print(tail);
	
	return 0;
}

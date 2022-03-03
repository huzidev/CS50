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
	
	return temp1; // basically we'll not reutrn tail specifically but temp1 so in main function ours tail will RECIEVED temp1 
	
}

struct node* AddAtBeg(struct node *tail, int data){
	
	struct node *temp1 = NULL;
	
	temp1 = (struct node*)malloc(sizeof(struct node));
	
	data = get_int("Element for beg? ");
	
	temp1->data = data;
	
	temp1->next = tail->next; // it is mandatory to use tail->next here instead of tail becuase it'll helps us when we have hundred of nodes
	
	tail->next = temp1;
	
	return tail;
}

struct node* AddAtEnd(struct node *tail, int data){
	
	struct node *temp1 = NULL;
	
	temp1 = (struct node*)malloc(sizeof(struct node));

	data = get_int("Element At End ");
	
	temp1->data = data;
	
	temp1->next = tail->next; // so first nodes next part is of same address as of first node it self
	
	tail->next = temp1;
	
	tail = tail->next;
	
	return tail; // basically we'll not reutrn tail specifically but temp1 so in main function ours tail will RECIEVED temp1 
	
}

struct node* AddAtPos(struct node *tail, int data, int pos){
	
	struct node *tmp1 = NULL;
	
	struct node *ptr = NULL;
	
	tmp1 = (struct node*)malloc(sizeof(struct node));
	
	ptr = tail->next;
	
	data = get_int("Element You wanna insert ");
	
	tmp1->data = data;
	
	while( pos != 2 ){
		
		ptr = ptr->next;
		
		pos--;
		
	}
	if( ptr != tail ){
		
		tmp1->next = tail->next;
		
		tail->next = tmp1;
		
		tail = tail->next;
		
	}
	else{
		
		tmp1->next = ptr->next;
		
		ptr->next = tmp1;
		
		
	}
	
	return tail;
}


void print(struct node *tail){
	
	struct node *ptr = NULL;
	
	ptr = tail->next;
	
	do{ // we'll use do while loop specially in circular link list because at beg ptr is equal to tail->next
// and we know that tail->next stores the address of first ever node therefore ptr will run from first node but 
// as tail->next address was already at first node therefore we'll update (PTR) form one node so it'll not starts from	
// specially first node rather starts from second till we reached where tail->next is present aka last node	
		printf("%d ", ptr->data);
		
		ptr = ptr->next;
		
	}while( ptr != tail->next);

//do while loops basically runs ours functions first then checks the conditons 
	
}


int main(void){
	
	int data;
	
	int pos;
	
	struct node *tail = NULL;
	
	tail = AddToEmpty(data);
	
	tail = AddAtBeg(tail, data);
	
	tail = AddAtEnd(tail, data);
	
	int location = get_int("At which position you wanna insert new node? ");
	
	pos = location;
	
	if(pos < 0){
		
		printf("You can't insert positon below 0");
		
	}
	else{
		
		tail = AddAtPos(tail, data, pos);
	
		print(tail);
	}

	
	return 0;
}

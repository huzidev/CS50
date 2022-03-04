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
	
	temp1->data = data;
	
	temp1->next = temp1; // so first nodes next part is of same address as of first node it self
	
	return temp1; // basically we'll not reutrn tail specifically but temp1 so in main function ours tail will RECIEVED temp1 
	
}

struct node* AddAtEnd(struct node *tail, int data){
	
	struct node *temp1 = NULL;
	
	temp1 = (struct node*)malloc(sizeof(struct node));
	
	temp1->data = data;
	
	temp1->next = tail->next; // so first nodes next part is of same address as of first node it self
	
	tail->next = temp1;
	
	tail = tail->next;
	
	return tail; // basically we'll not reutrn tail specifically but temp1 so in main function ours tail will RECIEVED temp1 
	
}

struct node* CreateList(struct node *tail){
	
	int n;
	
	int data;
	
	n = get_int("How many nodes you wanna create? ");
	
	if( n == 0 ){
		
		return tail;
		
	}
	else{
		
//		printf("Enter the first element : ");
		
		data = get_int("Element You wanna insert first : ");
		
		tail = AddToEmpty(data);
		
		for( int i = 1; i < n; i++){
			
			data = get_int("element number %d : ", i+1);
			
			tail = AddAtEnd(tail, data);
			
		}
		
		return tail;
	}
	
}

struct node* DelFirst(struct node *tail){
	
	struct node *ptr = NULL;
	
	struct node *next = NULL;
	
	// or we can just simply write tail->next = ptr->next; if we dont wanna make another pointer
	
	ptr = tail->next;
	
	next = ptr->next;
	
	free(ptr);
	
	ptr = NULL;
	
	tail->next = next;
	
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
	
	struct node *tail = NULL;
	
	tail = CreateList(tail);
	
	tail = DelFirst(tail);
	
	print(tail);
	
	return 0;
}

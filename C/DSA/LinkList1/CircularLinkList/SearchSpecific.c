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
		
		printf("You didn't insert any nodes! ");
		
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

struct node* Search(struct node *tail, int element){
	
	int index = 0;
	
	struct node *ptr = NULL;
	
	ptr = tail->next;
	
	if( tail == NULL ){
		
		return -2;
		
	}
	
	do{ // we've to use do while loop because if element we searched for is at first node we simply return index rather to update ours ptr
		
		if( ptr->data == element ){ // means if we get ours desired element in the first chance then simply return index
			
			return index; // so we'll get to know that at which index we have ours element and return type is index in ours main function
			
		}
		
		ptr = ptr->next; // if we didn't get ours desired element then we will update ours ptr
		
		index++;
		
	}while( ptr != tail->next ); // iterate ours ptr till tail->next means till end node
	
	return -1; // if element we searched for is not found
	
}

struct node* count(struct node *tail){
	
	struct node *ptr = NULL;
	
	ptr = tail->next;
	
	int count = 0;
	
	while( ptr != tail ){
		
		count++;

		ptr = ptr->next;

	}
	count++; // this one is mandatory because if we've total of 5 elements the counter will only print 4 becasue it is starting from zero therefore we've to make another counter for one additional count
	
	printf("Total nodes in the list are : %d\n", count);	
	
	return tail;
}

int main(void){
	
	int data;
	
	struct node *tail = NULL;
	
	tail = CreateList(tail);
		
	tail = count(tail);
	
	print(tail);
			
	printf("\n");
	
	int element;
	
	element = get_int("Which element you wanna find? ");
	
	int index = Search(tail, element);
	
	if( index == -1 ){
		
		printf("Element Not Found! ");
		
	}
	
	else if( index == -2 ){
		
		printf("List is Empty! ");
		
	}
	
	else{
		
		printf("Element %d you searched for is found at index number %d", element, index);
	
	}
	
	return 0;
}

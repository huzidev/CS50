#include <stdio.h>
#include <cs50.c>

struct node{

	int data;
	struct node *next;
	
};

// always remeber HEAD node always points towards the first NODE

int main(void){
	
	int data;
	// first node
	struct node *head = NULL;
	head = (struct node*)malloc(sizeof(struct node));
	
	//second node
	struct node *current = NULL;
	current = (struct node*)malloc(sizeof(struct node));
	
	//third node
	struct node* current1 = NULL;
	current1 = (struct node*)malloc(sizeof(struct node));
	
	// info for FIRST NODE
	data = get_int("element 1: ");
	head->data = data;
	head->next = NULL;	
	
	// INFO FOR SECOND NODE
	data = get_int("element 2: ") ;
	current->data = data;
	current->next = NULL;
	head->next = current; // means update the next part(LINK) part of head which is first node
	
	// INFO FOR THIRD NODE
	data = get_int("element 3: ");
	current1->data = data;
	current1->next = NULL;
	current->next = current1;
	
	struct node *ptr = NULL;

	ptr = head; // the address of head is pointing toward first node so we assigned the same address to ours PTR and that ptr will iterate till ptr == NULL
// we didn't use head for print refrence is because head always points toward first node	

	while(ptr != NULL){
		
		printf("%d ", ptr->data);
		ptr = ptr->next;
		
	}
	return 0;
}

#include <stdio.h>
#include <cs50.c>

struct node{
	
	int data;
	struct node *next;
	
};

// always remeber HEAD node always points towards the first NODE

int main(void){

	struct node *head = NULL;
	head = (struct node*)malloc(sizeof(struct node));
	
	int data = get_int("elements ");
	
	head->data = data;
	head->next = NULL;	
	printf("%d", head->data);
	
	return 0;
}

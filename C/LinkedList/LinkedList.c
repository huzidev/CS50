#include <cs50.c>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct node{ // since we decleared node over there therefore we've to decleared node inside the typedef as well
	int number;
	struct node *next;	
}
node; // we know that (TYPEDEF) allows us to creates ours own data

// *p's syntactic sugar is (->)

int main(void){
	
	node *list = NULL; // since we are using node which we define above therefore we were using (*) with variables name

	node *n = malloc(sizeof(node));

	if( n == NULL){
		return 1;
	}
	
	n->number = 1;
	n->next = NULL;
	
	list = n;
	
	n = malloc(sizeof(node));
	
	if( n == NULL){
		free(list);
		return 1;
	}
	
	n->number = 2;
	n->next = NULL;
	list->next = n;
	
	n = malloc(sizeof(node));
	
	if( n == NULL){
		free(list->next);
		free(list);
		return 1;
	}
	
	n->number = 3;
	n->next = NULL;
	list->next->next = n;
	
	
	// node *tmp = list means giving temporary variables and begining of loop which is (node number 1)
	
	// tmp != (doesn't equal) is coniditon which ours loop is going to check again and again untill it reach it's end and condition became false
	
	// tmp -> next is basically the update we wanna make after every time the condition became true
	
	// basically in cs50 we saw bunch of students pointing at each other just like linked trees 
	
	
	for(node *tmp = list; tmp != NULL; tmp = tmp -> next){
		printf("%i\n", tmp->number);
	}
	free(list);
	
	while(list != NULL){
		node *tmp = list -> next;
		free(list);
		list = tmp;
	}
	return 0;
	
}

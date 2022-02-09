#include <cs50.c>
#include <stdio.h>
#include <string.h>

typedef struct node{
	
	int number;
	struct node *left; // left child of main root which is always lesser than main root(parent)
	struct node *right; // right child of main root which is always greater than main root(parent)
}
node;

void free_tree(node *root); // for freeing all the allocated memory
void print_tree(node *root); // for printing the tree we created


int main(void){
	
	node *tree = NULL; // starts from NULL (zero) (INITIALIZE) (and) the (*) means derefrence operator means just open the adrress rather than printing the address location
	node *n = malloc(sizeof(node));	
	
	if( n == NULL ){
		return 1;
	}
	
	n->number = 2; // for main root which will have two child (1) on the left side and (2) on the right side
	n->left = NULL; //initalize
	n->right = NULL; // initialize
	tree = n; // to relate the number 2 we assigned above with the print
	
	n = malloc(sizeof(node)); // we didn't used (node *n) rather we just used n coz (node *n) is already assigned above
	if( n == NULL){
		return 1;
	}
	
	n->number = 1; // for the left child
	n->left = NULL;
	n->right = NULL;
	tree->left = n; // left child to be assigned the number (1)
	
	n = malloc(sizeof(node));
	if( n == NULL){
		return 1;
	}
	
	n->number = 3; // for the right child
	n->left = NULL;
	n->right = NULL;
	tree->right = n; 
	
	print_tree(tree); // will print the values we assigned (tree = n;)
	free_tree(tree); // will basically freed the tree we assigned when we says (tree = n;)
	
    return 0;
}

void free_tree(node *root){
	
	if ( root == NULL){
//		return 1;
		// or just simple
		return ;
	}
	free_tree(root->left); // first we've to free the left then the right child
	free_tree(root->right);
	free(root); // and in the end we'll freed the main root coz if we freed the main root first then we can't touch the right or left child
	return 0;
}

// note if we changed the printing sequence then it'll print according to the sequence
void print_tree(node *root){
	if (root == NULL ){
		return ;
	}
	print_tree(root->left); // first it'll print the left child 
	printf("%i", root->number); // then the parent (the main root)
	print_tree(root->right); // then the last (third) child 
	return 0;
}


// we are actually creating this

// 					2 (main root)
//   (left child)1        3(right child)

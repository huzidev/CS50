#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

struct bst{
	
	int data;
	
	struct bst *left; // self refrencing operators
	
	struct bst *right;
	
};

// INSERT IS BASICALLY A KIND OF FUNCTION USED TO INSERT
struct bst *insert(struct bst *h, int val){
	
	struct bst *temp = NULL;
	
	if( h == NULL ) {
		
		temp = (struct bst*)malloc(sizeof(struct bst));
	
		temp->data = val;
		
		temp->left = NULL;
		
		temp->right = NULL;
		
		h = temp; // to update after every iteration 
	}
	else{
		
		if( val < h->data ){ // means if val we wanna search is smaller then ours main data then move on left side coz it is BST
			
			h->left = insert(h->left, val);
			
		}
		
		else{
		
			h->right = insert(h->right, val);
			
		}
		
	}
	
	return h; // if non of the conditon is execute then this means ours Binary tree is empty hence return q 
	
}

// we can make preorder and post order as well

void inorder(struct bst *h){
	
	if( h != NULL ){
	
	inorder(h->left);
	
	printf("%d\t ", h->data); // main root AND WE USED \T coz \T will give us plenty of spaces just like a TAB
	
	inorder(h->right);
	
	}
}


int main(void){
	
	struct bst *root = NULL; // root is basically sub-trees
	
	int val, n, num;
	
	printf("\n enter numbers of term:- ");
	
	n = get_int("");
	
	while ( n != 0 ){ 
		
		printf("\n enter element:- ");
		
		val = get_int("");
		
		root = insert(root, val); // for storing values
		
		n--; // bcz of while loop and to maintains ours elements quantity
	}
		
	printf("\n display elements for inorder:- \t");
	
	inorder(root);
	
	return 0;
}

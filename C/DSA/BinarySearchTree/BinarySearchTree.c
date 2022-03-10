#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

struct bst{
	
	int data;
	
	struct bst *left; // self refrencing operators
	
	struct bst *right;
	
};

// INSERT IS BASICALLY A KIND OF FUNCTION USED TO INSERT
struct bst *insert(struct bst *q, int val){
	
	struct bst * temp = NULL;
	if( q == NULL) {
		
		temp = (struct bst*)malloc(sizeof(struct bst));
	
		temp->data = val;
		
		temp->left = NULL;
		
		temp->right = NULL;
		
		q = temp; // to update after every iteration 
	}
	else{
		
		if( val < q->data ){ // means if val we wanna search is smaller then ours main data then move on left side coz it is BST
			
			q->left = insert(q->left, val);
			
		}
		
		else{
		
			q->right = insert(q->right, val);
			
		}
		
	}
	
	return q; // if non of the conditon is execute then this means ours Binary tree is empty hence return q 
	
}

// we can make preorder and post order as well

void inorder(struct bst *q){
	
	if( q == NULL){
		
		return; // means if there is no value hence return coz tree is empty
		
	}
	
	inorder(q->left);
	
	printf("%d\t", q->data); // main root AND WE USED \T coz \T will give us plenty of spaces just like a TAB
	
	inorder(q->right);
}

struct bst *search(struct bst *p, int key, struct bst **y){


	struct bst *temp;
		
		if( p == NULL ) {
			
			return(NULL); // return null if it is empty
			
		}
		
		temp = p; // temp update to p coz now temp will look FOR new elements then we'll update it again then again temp will looks for next element
		
		*y = NULL; // to stores ours root as pointer
		
		while( temp != NULL){ // measn there is more node with address
			
			if(temp->data == key){ // the key is the value we are searching if key is equal to ours main root node we'll return
				
				return(key);
				
			}
			else{
				
				*y = temp;
				
				if(temp->data > key){ // data is bigger and key is smaller hence move towards left side
					
					temp = temp->left;
					
				}
				else{
				
					temp = temp->right;
				
				}
			}
			return(NULL);
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
	
	printf("\n display elements:-\t");
	
	inorder(root);
	
	return 0;
}

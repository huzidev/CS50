#include <stdio.h>
#include <stdlib.h>

struct bt{
	
	int data;
	
	struct bt *left;
	
	struct bt *right;
};

// dir for direction for left and right
struct bt* insert(struct bt *q, int val, char dir){
	
	struct bt *tmp;
	
	tmp = (struct bt*)malloc(sizeof(struct bt));
	
	tmp->data = val;
	
	tmp->left = tmp->right = NULL; // left and right initially to be NULL
	
	if( dir == 'l'){ // if direction is left
		
		q->left = tmp; 
		
	}
	else{
		
		q->right= tmp;
		
	}
	
}

void inorder(struct bt *q){
	
	if( q == NULL ){ // in (INORDER) conditon we'll print left then main root then right
		
		return; // therefore we were checking if q == null then return and print whatever the value is before NULL
		
	}
	
	inorder(q->left); // left elements
	
	printf(" %d ", q->data); // main root
	
	inorder(q->right); // right element
}

void preorder(struct bt *q){ // in (PREORDER) we first print main root then left then right
	
	if( q != NULL){
	// doesn't equal to null means some value then print acc to pattern
		printf(" %d ", q->data); 
		
		preorder(q->left); 
	
		preorder(q->right);	
		
	}
}


void postorder(struct bt *q){ // in (POSTORDER) we first print left then right then main root
	
	if( q != NULL){
	// doesn't equal to null means some value then print acc to pattern
		
		postorder(q->left); 
	
		postorder(q->right);	
		
		printf(" %d ", q->data); 
	}
}

int main(void){
	
	struct bt *root = (struct bt*)malloc(sizeof(struct bt));
	
	root->data = 4; // main root
	
									//BASICALLY WE ARE CREATING THIS
										
//												4	
//											 /      \ 
//											2	     6
//										   / \      /
//										  1   3     5

	insert(root,2,'l');						
	insert(root,6,'r');
	insert(root->left,1,'l');
	insert(root->right,5,'l');
	insert(root->left,3,'r');
	
	printf("\n display element in inorder:-");
	inorder(root);
		
	printf("\n display element in preorder:-");
	preorder(root);
	
	printf("\n display element in postorder:-");
	postorder(root);
	
	return 0;
}

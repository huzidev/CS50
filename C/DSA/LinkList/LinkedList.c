#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
	int data;
	
	struct node *next;
}*p, *tmp, *tmp1;


void insert_beg(int);
void insert_end(int);
void delete(int);
void display();




void insert_beg(int ele){
	
	tmp = p;
	tmp1 = (struct node*)malloc(sizeof(struct node));
	tmp1->data = ele;
	tmp1->next = p;
	p = tmp1;
}

void insert_end(int ele){
	
	tmp = p;
	tmp1 = (struct node*)malloc(sizeof(struct node));
	tmp1->data = ele;
	tmp1->next = NULL;
	
	if ( p == NULL){
		p = tmp1;
	}
	else{
		while(tmp->next != NULL){
			tmp= tmp->next;
		}
		tmp->next = tmp1;
	}
}


void delete_beg(){
	
	tmp = p;
	
	if( p == NULL){
		printf("\n no element to be deleted!");
	}
	else{
		printf("\n element deleted - %d", p->data);
		p = p->next;
	}
}

void delete_end(){
	
	tmp = p;
	
	struct node* pre;
	if( p ==  NULL){
		printf("\n no element to be deleted");
	}
	else if(p->next == NULL){
		printf("\n element deleted - %d", p->data);
		p = NULL;
	}
	else{
		while(tmp->next != NULL){
			pre = tmp;
			tmp = tmp->next;
		}
		pre->next = NULL;
		printf("\n element deleted - %d", tmp->data);
	}
}


void display(){
	
	tmp = p;
	while(tmp != NULL){
		printf("\n %d", tmp->data);
		tmp = tmp->next;
	}
}

int main(void){
	int val, n;
	p = NULL;
	
	do{
		printf("\n.********** MENU **********");
		printf("\n1. INSERT AT BEG");
		printf("\n2. INSERT AT END");
		printf("\n3. DELETE FROM BEG");
		printf("\n4. DELETE FROM END");
		printf("\n5. DISPLAY");
		printf("\n6. EXIT");
		printf("\n Enter yours chouice : ");
		scanf("%d", &n);
		
		switch(n){
			
			case 1:
				printf("\n Enter the value : ");
				scanf("%d", &val);
				insert_beg(val);
				break;
			
			case 2:
				printf("\n Enter the value : ");
				scanf("%d", &val);
				insert_end(val);
				break;
				
			case 3:
				delete_beg();
				break;
			
			case 4:
				delete_end();
				break;
				
			case 5:
				display();
				break;
				
			case 6:
				exit(0);
				break;
				
			default:
				printf("\n wrong choice!");
				break;
		}
		printf("\n do you wanna continue... ");
	}
	while('y' == getch());
}

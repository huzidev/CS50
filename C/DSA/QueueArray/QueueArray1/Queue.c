#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

struct queue{
	int f, b, size;
	
	int* arr;
};

int isEmpty(struct queue *q){
	
	if( q->f == q->b ){ // because when array is empty f and b were at same position -1
		
		return -1;
		
	}
	else{
		
		return 0;
		
	}
	
}

int isFull(struct queue *q){
	
	if( q->b == q->size - 1){ // when array is full q-> is at size - 1 if size is 3 then b will be at 2 according to index
		
		return 1;
		
	}
	else{
		
		return 0;
		
	}
}

void enqueue(struct queue *q, int val){
	
	if(isFull(q)){
		
		printf("Queue is full! ");
		
	}
	else{
		
		q->b++;
		
		q->arr[q->b] = val;
		
	}
	
}

int dequeue(struct queue *q, int val){
	
	int a = -1;
	
	if(isEmpty(q)){
		
		printf("Queue is Empty! ");
		
	}
	else{
		
		q->f++;
		a = q->arr[q->f];
		
	}
	
	return a;
}

int main(void){
	
	struct queue q;
	
	q.size = 10;
	
	q.f = q.b = -1;
	
    q.arr = (int*) malloc(q.size*sizeof(int));
	
	int val, n;
	
	
	do{
		printf("\n ********** MENU **********");
		printf("\n1.ENQUEUE");
		printf("\n2.DEQUEUE");
		printf("\n3.IS FULL");
		printf("\n4.IS EMPTY");
		printf("\n5.FIRST ELEMENT");
		printf("\n6.LAST ELEMENT");	
		printf("\n7.EXIT");
		printf("\n enter yours choice : ");
		scanf("%d", &n);	
		
		switch(n){
			
			case 1:
				printf("\n enter the value : ");
				scanf("%d", &val);
				enqueue(val);
				break;
				
			case 2:
				dequeue(q);
				break;
				
			case 3:
				printf("\n is FULL : %d", isFull(q));
				break;
				
			case 4:
				printf("\n is Empty : %d", isEmpty(q));
				break;
				
			case 5:
				printf("\n Front Element: %d", f(q));
				break;
				
			case 6:
				printf("\n Rear Element: %d", b(q));
				break;
				
			case 7 :
				printf("Exit successfully! ");
				exit(0); 
				break;
			
			default:
				printf("\n wrong choice!");
				break;
		}
		printf("\n do you wanna continue!");
	}
	while('y' == getch());
	
	return 0;
}

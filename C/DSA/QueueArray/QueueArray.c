#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct que{
	int front, rear, size; // front, rear are basically just poinetrs
	
	unsigned actualSize; // the total size of array
	
	int* arr;
};

struct que* createque(unsigned actualSize){
	
	struct que* que = (struct que*)malloc(sizeof(struct que));
	
	que->actualSize = actualSize;
	
	que->size = 0; // index
	
	que->front = que->rear = -1; // means if front and rear are equal to -1 means array is empty
	
	que->arr = (int*)malloc(que->actualSize * sizeof(int));
	
	return que;
	
	free(que);
	free(que->arr);
}



int isFull(struct que* que){
	
	return (que->size == que->actualSize); // compare size of que and actualSize of array IF they are equal means que is full
	
}

void enqueue(struct que* que, int item){
	
	if(isFull(que)){

		return;

	}
	
	que->rear = que->rear +1; // BEACUSE INSERTION always takes place from rear end
	
	que->arr[que->rear] =  item; // the item means value we will insert
	
	que->size = que->size +1; // obviously size will increase but actual size will remains same 
	
	if(que->front == -1){
		
		que->front++; // coz if -1 means list is EMPTY then assigned the value to fornt ONLY IF INITIALLY OURS QUE IS EMPTY therefore we wrote == -1
		
	}
	printf("%d enqueued to que\n", item);
	
}


int isEmpty(struct que* que){
	
	return (que->size == 0);
	
}

int dequeue(struct que* que){
	
	if(isEmpty(que)){

		return INT_MIN;

	}
	
	int item = que->arr[que->front]; // coz deletion will take place from front part
	
	if(que->front == que->rear){ // if front is equal to rear means QUE IS empty
		
		que->front = que->rear = -1;
		
	}	
	else{
	
		que->front = que->front +1; // coz when element is deleted from FRONT then simply update it by +1
		
	}
	
	que->size = que->size -1;
	
	printf("\n %d dequeued", item);
	
	return item;
}

int front(struct que* que){
	
	if(isEmpty(que)){ // if empty then we can't saw what is at front
		
		return INT_MIN;		
		
	}
	return que->arr[que->front]; // return whatever the front value is
}

int rear(struct que* que){
	
	if(isEmpty(que)){
	
		return INT_MIN;
	
	}
	
	return que->arr[que->rear];
}

int main(void){
	
	int val, n;
	struct que* que = createque(100);
	
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
				enqueue(que, val);
				break;
				
			case 2:
				dequeue(que);
				break;
				
			case 3:
				printf("\n is FULL : %d", isFull(que));
				break;
				
			case 4:
				printf("\n is Empty : %d", isEmpty(que));
				break;
				
			case 5:
				printf("\n Front Element: %d", front(que));
				break;
				
			case 6:
				printf("\n Rear Element: %d", rear(que));
				break;
				
			case 7 :
				exit(0); 
				break;
			
			default:
				printf("\n wrong choice!");
				break;
		}
		printf("\n do you wanna continue!");
	}
	while('y' == getch());
	
	
}

// since we didn't insert all 100 elements as much size we gave for creating array therefore while checking for isFull it'll shows (0) means true

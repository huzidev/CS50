#include <stdio.h>
#include <cs50.c>
#include <stdlib.h>

struct que{
	int front, size, rear; // front, rear are basically just poinetrs (BECAUSE) of contigious memory
	
	unsigned actualSize; // the total size of array
	
	int* arr;
};

struct que* createque(unsigned actualSize){
	
	struct que *que = (struct que*)malloc(sizeof(struct que));
	
	que->actualSize = actualSize; // will receive the size form ours main functions
	
	que->size = 0; // index
	
	que->front = -1; // means if front and rear are equal to -1 means array is empty
	
	que->rear = -1;
	
	que->arr = (int*)malloc( que->actualSize * sizeof(int)); // for dynamic allocation of memory
	
	return que;
}



int isFull(struct que* que){
	
	if( que->rear == que->actualSize ){
		
		printf("Queue Is Full!");
		
		return 1; // compare size of que and actualSize of array IF they are equal means que is full
		
	}
	else{

		return 0;
		
	}
	
	
}

int isEmpty(struct que* que){
	
	if( que->size == 0 ){
		
		printf("Queue Is Empty!");
	
		return -1;
		
	}
	
	
	else{
		
		return 0;
		
	}
	
}

void enqueue(struct que* que, int item){
	
	if(isFull(que)){
		
		return; // to overcome overflow

	}
	
	que->rear++; // BEACUSE INSERTION always takes place from rear end
	
	que->arr[que->rear] = item; // the item means value we will insert
	
	que->size++; // obviously size will increase but actualsize will remains same 
	
	if(que->front == -1){
		
		que->front++; // coz if -1 means list is EMPTY then assigned the value to frnnt ONLY IF INITIALLY OURS QUE IS EMPTY therefore we wrote == -1
		
	}
	printf("%d enqueued to que\n", item);
	
}



int dequeue(struct que* que){
	
	if(isEmpty(que)){

		return INT_MIN;

	}
	
	int item = que->arr[que->front]; // coz deletion will take place from front part
	
	if(que->front == que->rear){ // if front is equal to rear means QUE IS empty means we've just one element and we delete it now front and rear are poiting at same point therefore we've to force them to go back to -1
	
		que->front = -1;
	
		que->rear = -1;
	
	}	
	else{
	
		que->front++; // coz when element is deleted from FRONT then simply update it by +1 so we can delete the next element also
		
	}
	
	que->size--; // obviusly if we've 3 ele and we deleted an ele so size will be decreased by 1
	
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
		n = get_int("");	
			
		switch(n){
				
			case 1:
				printf("\n enter the value : ");
				val = get_int("");
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
				printf("Exit successfully!");
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

	// since we didn't insert all 100 elements as much size we gave for creating array therefore while checking for isFull it'll shows (0) means true

#include <stdio.h>
#include <cs50.c>

int main(void){
	int n = get_int("how many elements you wanna sort? ");
	n = (n - 1);
	int A[n], i, j, temp;
	printf("Enter you elements: ");

	for(int i = 0; i < n; i++){
		
		scanf("%d ", &A[i]); // A[i] means index starts from zero and it is a kind of breadcrumps means it is an ARRAY
	}
	for(int i = 0; i < n; i++){
		printf("total passes pass are %i\n", i+1);
		
		for( j = i; j < n; j++){ // j + 1  means elements after every single elements
			
			if(A[i] > A[j]){ // i = 0 means index first element ever
			
				temp = A[i]; // j = 1st element after index element
				A[i] = A[j];
				A[j] = temp;
			}	 
		}
	}
	printf("sorted array: ");
	for(int i = 0; i <n;i++){
		printf("%d ", A[i]);
	}
	return 0;
}

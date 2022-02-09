#include <cs50.c>
#include <stdio.h>
#include <string.h>

int main(void){
	int *list = malloc(3 * sizeof(int));
	if( list == NULL){
		return 1;
	}
	
//	list[0] = 1;
//	list[1] = 2;
//	list[2] = 3;
	
	// OR BY A COOL WAY
	
	*list = 1;
	*(list + 1) = 2;
	*(list + 2) = 3;
	
	// now if we wanted to increase memory if we wanted to add more characters
	int *tmp = malloc(4 * sizeof(int));
	if(tmp == NULL){
		free(list); // so we can freed the list we created above and then re-alloc the memory once again
		return 1; // the list will only be free at the first place when there is no more memory hence (if tmp == null)
	}
	for( int i = 0; i < 3; i++){
		tmp[i] = list[i];
	} 
	tmp[3] = 4; // 3 characters we created above will be linked to the new character and we've already pointed that (tmp[i] = list[i])
	free(list);

	list = tmp;
	
	for(int i = 0; i < 4; i++){ // why we did (i < 4) is because 3 characters were already described and we wanted an additional 4th character
		printf("%i\n", list[i]);
	}
	free(list);
	return 0;
	
}

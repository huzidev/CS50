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
	int *tmp = realloc(list, 4 * sizeof(int)); // (REALLOC)
	if(tmp == NULL){
		return 1; // the list will only be free at the first place when there is no more memory hence (if tmp == null)
	}
	tmp[3] = 4; // 3 characters we created above will be linked to the new character and we've already pointed that (tmp[i] = list[i])

	list = tmp;
	
	for(int i = 0; i < 4; i++){ // why we did (i < 4) is because 3 characters were already described and we wanted an additional 4th character
		printf("%i\n", list[i]);
	}
	free(list);
	return 0;
	
	// basically what (REALLOC) actually did is that it freed the old chunk of memory and adjust the arrays from old chunk of memory into new chunk of memory 
	// therefore now we didn't freed(list) coz (REALLOC) will did this for us	
}

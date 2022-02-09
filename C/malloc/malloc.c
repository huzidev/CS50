#include <cs50.c>
#include <stdio.h>
#include <string.h>


// every time we uses malloc it takes memory from (HEAP) memory therefore it is necessary to free the memory once we used (or) heap overflow could occurs and ours program may crash
// when we uses malloc and uses the computer memory and IF ours computer may starts hanging even we've freed tha memory it is because of some bug due to which ours allocated memory was trapped
//int main(void){
//	char *s = get_string("", "s: ");
//	char *t = malloc(strlen(s) +1); // we uses strlen because we'll get memory as much as of the length of ours function as many (BYTES) as of lenth and (+1) is for null characetr	
//
//	strcpy (t, s); // DONT FORGET TO USE IT

//	t[0] = toupper(t[0]);
//	
//	printf("s: %s\n", s);
//	printf("t: %s\n", t);
//	
//	free(t); // MOST IMP
//	return 0;	
//}

// sometimes (MALLOC) didn't work so we've to use (if t == null)

int main(void){
	char *s = get_string("", "s: ");
	char *t = malloc(strlen(s) + 1);
	
	if( t == NULL){
		return 1; //means if no memory available then return 1;
	}
	
	strcpy(t, s); // DON'T FORGET TO USE IT
	
	if( strlen(t) > 0 ){
		
		t[0] = toupper(t[0]);
	}
	
	printf("s: %s\n", s);
	printf("t: %s\n", t);
	
	free(t);
	return 0;
}




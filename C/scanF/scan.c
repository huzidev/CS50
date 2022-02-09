#include <cs50.c>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main(void){
//	int x;
//	printf("x: ");
//	
//	scanf("%i", &x); // basically what scanf actually did is that it just scan the integer first then it'll print it BUT when we use linked tress we don't have to use scanf 
//	printf("x: %i\n", x);
//    return 0;
//}


int main(void){
	char s[4];
	printf("s: ");
	scanf("%s", s);
	printf("s: %s\n", s);
	return 0;
}

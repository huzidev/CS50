#include <stdio.h>
#include <cs50.c>
#include <string.h>

// LINEAR SEARACH for int
 int main(void)
 {
     int numbers[] = {4, 5, 6, 7, 3, 2, 1, 0};
     
     int size = (sizeof(numbers) / sizeof(int));
     
     printf("the total numbes of elements are %i\n", size-1);
     
     printf("Which element you wanna search in bw 4, 5, 6, 7, 3, 2, 1, 0\n");
     
     int input = get_int("Element you wanna search: ");
     
     for (int i = 0; i < size; i++) // 8 is the total numebr of numebrs we insert
     {
         if( (numbers[i] == input))
         {
             printf("Found\n");
             return 0;
         }
     }
     printf("not found\n");
     return 1;
 }

// LINEAR SEARACH for String



//int main(void){
//    string names[] = {"huzi", "Ali", "Hassan"};
//    
//    int size = (sizeof(names) / sizeof(string));
//    
//    printf("total elements are %i\n ", size - 1);
//    
//    string a = get_string("", "name: ");
//    
//    for (int i = 0; i < size; i++){
//        if(strcmp(names[i], a) == 0){  // in the end we've to make sure that we were usign (== 0) means indexified satrts from zero
//            printf("found \n");
//            return 0;
//        }
//    }
//    printf("not found\n");
//    return 1; //this will only work if we didn't return true conditon in first case (therefore) we created it outside of for and if
//}

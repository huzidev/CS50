#include <cs50.c>
#include <stdio.h>

// int main(void)
// {
//     int a = get_int("a: ");
//     int b = get_int("b: ");
//     int c = get_int("c: ");
//     float z = (a + b + c) / 3;
//     printf("Average: %F\n", z);
//     return 0;
// }



// BUT the above method is not conventional it takes more memory becasue just single score takes (4Bytes) (32BITS) because it is an (INT) therefore we'll use (ARRAY)

// ARRAY: is a type of data that can store multiple values



// int main(void)
// {
//     int Scores[3]; // ARRAY is indexified means starts from 0 if we start it from 1 we can but it is nothing but we'll just sacrifice ours one element
//     Scores[0] = 72;
//     Scores[1] = 73;
//     Scores[2] = 33;
//     float z = (Scores[0] + Scores[1] + Scores[2]) / 3.0; // 3.0 so we can have ours avg in decimal
//     printf("Average: %f\n", z);
//     return 0;
// }


// FOR MAKING IT MORE USER FRIENDLY

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int c = get_int("c: ");
    float z = (a + b + c) / 3.0;
    printf("Average: %f\n", z);
    return 0;
}


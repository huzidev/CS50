#include <cs50.c>
#include <stdio.h>

// With normal int we can't sum up values like 2 billion + 2 billion the result will be something like -2116124 is because while using (simple int) the BITS ran out of memory and the values get into -ve therefore we'll use (long) for longer values like 2 billion + 2 billion

// int main(void)
// {
//     int x = get_int("x: ");
//     int y = get_int("y: ");
//     int z = x + y; // This line is like (Syntactic Sugar) means in less line but better code
//     printf("%li\n", z); // (%i) just works as Link to link ours int above with this line to be print
// }

// We can sum up larger values as well
int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");
    long z = x + y; // This line is like (Syntactic Sugar) means in less line but better code
    printf("%li\n", z); // (%i) just works as Link to link ours int above with this line to be print
}

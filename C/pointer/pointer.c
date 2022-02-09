#include <stdio.h>
#include <cs50.c>
#include <string.h>

// NOTE the pointer will always points towards the address only when it is used with (int, char) otherwise it'll wouldn't works as pointer rather it'll then works as (DEREFRENCE OPERATOR) means just open that address not to print address just open whatever inside of it has
// POINTER is just varaibles which stores the address(Location) of ours specific value we use (*) asterisk for pointers

int main(void)
{
    int n = 50;
    int *p = &n; // Ampersand(&) means the value whoms location (address) we wanted to know
    // printf("%p\n", &n); // just shows us address
    // The method at below will shows us location address and value as well
    printf("%p\n", p); // for address
    printf("%i\n", *p); // we uses (%i) becasue we assigned it int at above
    return 0;
}

// always remember the address of ours value changes continuosly

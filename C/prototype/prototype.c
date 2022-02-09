#include <cs50.c>
#include <stdio.h>

// PROTOTYPE IS BASICALLY THE (BREADCRUMP, HINT) WE LEFT BEFORE (INT MAIN(VOID)) WITH A (SEMICOLON ;) TO TELL OURS COMPUTER THAT SOMETHING REALTED TO THIS NAME WILL BE PRESENT DOWN SOMEWHERE

// void hello(void) // THIS MEANS IT IS A FUNCTION WHICH HAS TO BE RECALL WHEN IT IS REQUIRED WE'LL (LINK) IT TO DOWN IN OURS FOR LOOP
// {
//     printf("Hello, World\n");
// }

// int main(void)
// {
//     for( int i = 0; i < 3; i++)
//     {
//         hello(); // HERE WE LINKED IT
//     }
//     return 0;
// }

// OR

// void hello(void); // this is PROTOTYPE (BREADCRUMP, HINT)

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         hello();
//     }
//     return 0;
// }

// void hello(void) // This is the message of ours prototype
// {
//     printf("Hello, World\n");
// }

// OR

void hello(int n);

int main(void){

    hello(5); // We can assign the value we want it to be iterate

    return 0; // THIS SHALL ALWAYS HAS TO BE INSIDE INT MAIN(VOID)
}

void hello(int n)
{
    for (int i = 0; i < n; i++) // here we says (i < n) because we've already assign the value at top
    {
        printf("Hello, World\n");
    }
}

// THEREFORE WE USE LIBRARIES BECAUSE THERE IS SOME BREADCRUMPS HINTS INSIDE THE LIBRARIES

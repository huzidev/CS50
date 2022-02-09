#include <stdio.h>
#include <cs50.c>
#include <string.h>
#include <ctype.h>



// Command line arguments are those commands which we can use directly from ours terminal instead doind Hard Copy

// and it can be very useful when we were using some (VPS) virtual private server means we pay for that computer now from ours own home we can have access of that (high power) computer from ours home adn we can run ours C program on that computer

int main(int argc, string argv[]){
    // printf("Hello, %s\n", argv[1]);
    if(argc == 2)
    {
        printf ("Hello, %s\n", argv[1]); // argv[1] means first argument that passed on the program
    }
    else
    {
        printf("Hello, World\n");
    }
    return 0;
}


// (ARGC) counts all the program that runs on ours CLA coz (ARGC) is an integer, and ARGV is array of string and it contains all the commands that is going to run

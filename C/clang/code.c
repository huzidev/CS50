#include <cs50.c>
#include <stdio.h>


int main(void)
{
    string name = get_string("", "name: ");
    printf("Hello, %s\n", name);
    return 0;
}

// basically clang is a real compiler which converts ours source code into machine code

// we use make but make is not actually a compiler rather it is a (UTILITY) make actually helps us to run a program and make is a running command called clang means (MAKE) run those commands in which (clang) is added

// using clang is (TEDIOUS) means it is dull and slow coz we've to specify what libraries we were using except some by deafult libraries like (STDIO.H) like if we were using  (CS50.H) we've to tell ours machine in the code in CLI that we were using (CS50.H) and we've to make an output file as well

// clang -o hello hello.c -lcs50

// clang is tedious because what if we used (multiple libraries) we've to specify them all

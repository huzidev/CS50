#include <cs50.c>
#include <stdio.h>

// Test for C
int main(void)
{
    string answer = get_string("", "What Is Your Name? "); // We always use (get) when we wanted to get data from user and then eventually return it

    printf("hello, %s\n", answer); // %s is basically link for string we made above

    return 0; // Return 0 for ok success and return 1 for error
}

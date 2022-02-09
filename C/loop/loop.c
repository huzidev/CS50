#include <cs50.c>
#include <stdio.h>

int main(void)
{
    // while (true) // Will run forever because true is always true
    // {
    //     printf("hello\n");
    // }

    int i = 0; // Means index (start from Zero)
    // while (i < 3) // The amount of time we wanted it to run if we says (i < 5) it'll run 5 times
    int n = 3;
    while (i < n)
    {
        printf("Hello, World This is while loop\n");
        i++;
            // OR
        // i += 1;
        // i = i + 1;
    }


    // We can make Decrement by doing some manipulation
    // int n = 3;
    // int i = n;
    // while (i > 0) // just i > 0 then decrement and put the values about that time we want iteration above
    // {
    //     printf("hello\n");
    //     i--;
    // }
    return 0;

    // NOTE: Basically what loop actually do is that it run and checks the condition that whats in the block until unless it reaches it's limit coz then the condition will be false once it reaches the limit of its (ITERATION)
}

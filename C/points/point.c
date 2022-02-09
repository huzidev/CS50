#include <cs50.c>
#include <stdio.h>

int main(void)
{
    const int MINE = 2; // NOTE: Whenever we use (const), make sure we make variable name in capital to visualize it is some CONSTANT function

    int points = get_int("How Many Points You lose? ");
    if ( points > MINE)
    {
        printf("You lose more points than I do \n");
    }
    else if ( points < MINE)
    {
        printf("You lose less points than I do \n");
    }
    else
    {
        printf("You lose same points as of me \n");
    }
    return 0;
}

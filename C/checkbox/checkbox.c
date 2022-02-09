#include <cs50.c>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do You Agree? "); // Whenever we used single characters (CHAR) we have to ALWAYS use (SINGLE QUOTES) otherwise it'll gave us error
    if ( c == 'y' || c == 'Y') // These double vertical lines means (OR)
    {
        printf("agreed\n");
    }
    else if ( c == 'n' || c == 'N')
    {
        printf("not agreed\n");
    }
    else
    {
        printf("You've to type whether Y or N\n");
    }
    return 0;
}

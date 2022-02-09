#include <cs50.c>
#include <stdio.h>

// what do while loop actually do is that it didn't satrts from top rather it check the conditions from last like some (boolean expression) from the last


// we'll make the (?) just like in mario game
// int main(void)
// {
//     int n; // to assign that what ever is it it is an integer a (number)
//     do
//     {
//         n = get_int("width: "); // As much width the user add the (?) will print according to that
//     }
//     while (n < 1); // means when (n) the width which ours user will input get greater than one the loop will break coz we've given it (less than) hence if it gets (greater than 1) the loop will break and assign the values
//     for (int i = 0; i < n; i++)
//     {
//         printf("?");
//     }
//     printf("\n"); // so it'll only give us a new line when we completed the whole, tag not before
//     return 0;
// }

// Brick just like mario game

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while(n < 1);

    // FOR ROWS (---)
    for(int i = 0; i < n; i++) // whatever the height is, rows and column will be of same blocks
    {
        //FOR COLUMNS (|)
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

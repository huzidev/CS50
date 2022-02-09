#include <cs50.c>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    if (x > y)
    {
        printf("X is greater than Y \n");
    }
    else if (x < y)
    {
        printf("X is less than Y \n");
    }
    else
    {
        printf("X is equal to Y \n");
    }
    return 0;
}

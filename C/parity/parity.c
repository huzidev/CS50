#include <cs50.c>
#include <stdio.h>

int main(void)
{
    int n  = get_int("n: "); // We can change (int into long ) if we wanna find out if some value in billions is even or odd

    if (n % 2 == 0) // % Sign is basically remainder operator means divide (simply) n by denominator 2
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    return 0;
}

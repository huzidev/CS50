#include <cs50.c>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float amount = get_float("Dollar: ");
    int pennies = round(amount * 100); // we used (int) over there because we dont want pennies into further decimal values and therefore we used (round) which is the function of maths library and these are really small but necessary details (Even) professional programmers commit these kind of mistakes to not to use these small functions
    printf("pennies: %i\n", pennies);
    return 0;
}

// at some point ours computer will be unable to round the value therefore we'll use a (MATHS) library

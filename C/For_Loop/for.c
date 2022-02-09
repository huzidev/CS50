#include <cs50.c>
#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 3; i++) // IF we say i <= 3 then it'll print 4 times coz 0, 1, 2, 3 when it is at 3 it'll be equal to 3 therefore it'll be print 4 times because we used i <= 3
    {
        printf("Hello, World This is for loop\n");
    }
    return 0;
}

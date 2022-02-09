#include <stdio.h>
#include <cs50.c>
#include <string.h>

// int main(void)
// {
//     char *s = "HI!";
//     printf("%c\n", *s);
//     printf("%c\n", *(s + 1));
//     printf("%c\n", *(s + 2));
//     printf("%c\n", *(s + 3));
//     return 0;
// }


// for integers
int main(void)
{
    int numbers[] = {4, 5, 6, 3, 1, 2, 9, 0};
    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));
    printf("%i\n", *(numbers + 7));
    return 0;
}


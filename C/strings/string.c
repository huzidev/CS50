#include <stdio.h>
#include <cs50.c>
#include <string.h>

// int main(void)
// {
//     string s = "HI!";
//     printf("%s\n", s);
// }

// We can print same value using (CHAR) even with libraries removed

// int main(void)
// {
//     char *s = "HI!";
//     printf("%s\n", s);
// }


// this method below will print same addresses
// int main(void)
// {
//     string s = "HI!";
//     char *p = &s[0];
//     printf("%p\n", p);
//     printf("%p\n", s);
//     return 0;
// }

// int main(void)
// {
//     char *s = "HI!";
//     printf("%p\n", s);
//     printf("%p\n", &s[0]); // address of H
//     printf("%p\n", &s[1]); // address of I
//     printf("%p\n", &s[2]); // address of !
//     printf("%p\n", &s[3]); // address of null character
//     return 0;
// }


int main(void)
{
    char *s = "HI!";
    printf("%c\n", s[0]); // address of H
    printf("%c\n", s[1]); // address of I
    printf("%c\n", s[2]); // address of !
    printf("%c\n", s[3]); // address of null character
    return 0;
}

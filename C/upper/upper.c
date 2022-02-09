#include <stdio.h>
#include <cs50.c>
#include <string.h>
#include <ctype.h>

// int main(void)
// {
//     string s = get_string("Before: ");
//     printf("After:  ");
//     for (int i = 0, n = strlen(s); i < n; i++)
//     {
//         if(s[i] >= 'a' && s[i] <= 'z')
//         {
//             printf("%c", s[i] - 32); // in ascii chart (capital A) is at positon 65 and (small a) is at 97 means there is a difference of 32 at each alphabets for being capital and small
//         }
//         else
//         {
//             printf("%c", s[i]); // so if user type anything except alphabet it just return that input
//         }
//     }
//     printf("\n");
//     return 0;
// }


int main(void)
{
    string s = get_string("", "Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i])); // we used a library called (ctype.h) for this touppper function
    }
    printf("\n");
    return 0;
}

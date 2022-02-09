#include <stdio.h>
#include <cs50.c>
#include <string.h>
#include <ctype.h>

// int main(void)
// {
//     int i = get_int("i: ");
//     int j = get_int("j: ");
//     if( i == j )
//     {
//         printf("Same\n");
//     }
//     else
//     {
//         printf("Different\n");
//     }
//     return 0;
// }

// for string
// by this method if we use same (string) they'll say it is different

// int main(void)
// {
//     string s = get_string("s: ");
//     string t = get_string("t: ");
//     if( s == t)
//     {
//         printf("Same\n");
//     }
//     else
//     {
//         printf("Different\n");
//     }
//     return 0;
// }

// fix but if we type first word in small and other in captial it'll give error hence simply use (TO UPPER)

// int main(void)
// {
//     char *s = get_string("s: ");
//     char *t = get_string("t: ");
//     if(strcmp(s, t) == 0)
//     {
//         printf("same\n");
//     }
//     else
//     {
//         printf("different\n");
//     }
//     return 0;
// }

int main(void)
{
    string s = get_string("", "s: ");
    string t = s; // its compulsory that we use (t = s) instead of (s = t) because we've already assigned s to other string
    t[0] = toupper(t[0]);
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    return 0;
}

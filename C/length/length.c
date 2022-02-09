#include <stdio.h>
#include <cs50.c>
#include <string.h>

// int main(void)
// {
//     string name = get_string("Name: ");
//     int i = 0;
//     while (name[i] != '\0') // (!=) means (doesn't equal), means the conditons should not be equal to null (\o) coz if then just make it false
//     {
//         i++;
//     }
//     printf("%i\n", i);
//     return 0;
// }


// Portotype way

// int string_length(string s);

// int main(void)
// {
//     string name = get_string("Name: ");
//     int length = string_length(name);
//     printf("%i\n", length);
//     return 0;
// }

// int string_length(string s)
// {
//     int i = 0;
//     while(s[i] != '\0')
//     {
//         i++;
//     }
//     return i;
// }

// int main(void)
// {
//     string name = get_string("Name: ");
//     int length = strlen(name); // strlen is the function form new library called (string.h)
//     printf("%i\n", length);
// }

// int main(void)
// {
//     string s = get_string("Input: ");
//     printf("Output: ");
//     for (int i = 0; i < strlen(s); i++) // means iterate it as many time as much as the length of ours user input
//     {
//         printf("%c", s[i]); // c for character
//     }
//     printf("\n");
//     return 0;
// }

// synctactic sugar way

// int main(void)
// {
//     string s = get_string("Input:  ");
//     printf("Output: ");
//     int length = strlen(s);
//     for (int i = 0; i < length; i++)
//     {
//         printf("%c", s[i]);
//     }
//     printf("\n");
//     return 0;
// }

// OR


int main(void)
{
    string s = get_string("", "Input:  ");
    printf("Output: ");
    for(int i = 0, n = strlen(s); i < n; i++) // make sure to use comma after (i = o) coz we wanted to make another variable their of name (strlen)
    {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}

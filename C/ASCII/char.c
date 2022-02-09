#include <cs50.c>
#include <stdio.h>

// by this method we convert (char into int), their the ASCII code of (HI!) into ASCII chart is the integers in the result

// int main(void)
// {
//     char c1 = 'H';
//     char c2 = 'I';
//     char c3 = '!';
//     // int c = (int)c1, (int)c2, (int)c3;
//     printf("%i %i %i \n", (int)c1, (int)c2, (int)c3);
//     return 0;
// }


// // simple print of HI!
// int main(void)
// {
//     string s = "HI!";
//     printf("%s\n", s);
//     return 0;
// }


// BUT while converting string into int
int main(void)
{
    string s = "HI!";
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    return 0;
}

// since we've just 3 character (HI!) but when we print them with the case of 4 characters it'll print (0) at the very last which is ours (sentinal value) null character

// SENTINAL VALUES is call null character (\0) which seprates one string from another in ours memory

// in binary null character is (00000000) eight zeros

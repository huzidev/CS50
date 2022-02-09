#include <stdio.h>
#include <cs50.c>
#include <string.h>

// void draw(int n);

// int main(void)	
// {
//     int height = get_int("Height: ");
//     draw(height); // just a function which takes the height from the above string as an input
// }

// void draw(int n)
// {
//     // rows
//     for(int i = 0; i < n; i++)
//     {
//         // columns
//         for(int j = 0; j < i + 1; j++) // J < I + 1 (meana) as the iteration goes on and on and on until unless the condition became false we'll add another (#) afther every columns
//         {
//             printf("#");
//             printf("\n");
//         }
//         // printf("\n");
//     }
//     // printf("\n");
// }


// // in case if user input an (-ve) value
// void draw(int n);

// int main(void)
// {
//     int height = get_int("Height: ");
//     draw(height); // just a function which takes the height from the above string as an input
//     return 0;
// }

// void draw(int n)
// {
//     if (n <= 0) // if some one add value in (-ve) or equal to zero than ours code will return (Nothing)
//     {
//         return ;
//     }
//     draw(n-1);
//     for(int i = 0; i < n; i++){
//         printf("#");
//     }
//     printf("\n");
// }







void draw(int n, int w);

int main(void)
{
    int height = get_int("Height: ");
    int width = get_int("width: ");
    draw(height, width);
}

void draw(int n, int w)
{
    // rows
    for(int h = 0; h < n; h++)
    {
        printf("#");
        for(int j = 0; j < ((w - h) - 1 ) ; j++){
            printf("#");
        }
        printf("\n");
    }
}

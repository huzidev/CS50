#include <cs50.c>
#include <stdio.h>


// always remember when we divide an integer with another integer the result will always been an integer now (SUPPOSE) we divide 1 by 10 both are integer now the (RESULT) will also been an integer which is (0) not 0.1 coz 0.1 is Real Number or (Float) the rest of the value after decimal in the result in case we use integer will be blown away called (TRUNCATION)


// int main(void)
// {
//     int x = get_int("x: ");
//     int y = get_int("y: ");
//     int z = x / y;
//     printf("%i\n", z);
//     return 0;
// }

int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");
    float z = x / y;
    printf("%.50F\n", z); // the computer may not provide you actual result but it'll provide approximate result
    return 0;
}

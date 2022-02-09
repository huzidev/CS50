#include <cs50.c>
#include <stdio.h>

// int main(void)
// {
//     float regular = get_float("Regular Price: "); // We used (regular) because the regular price user will input can be in (decimal) and we use float instead of int while the number can be in (decimal)

//     float sale = regular * .85; // if 15% off

//     printf("Sale Price: %.2F\n", sale); //%.2F means 2 decimal after the value coz in US currency there is always 2 figure after the value like (100.00$) if we put %.50F there will be 50 more significant value after decimal
// }

// PROTOTYPE way

// float discount(float price);

// int main(void)
// {
//     float regular = get_float("Regular Price: ");
//     float sale = discount (regular);
//     printf("Sale Price: %.2F\n", sale);
// }

// float discount (float price)
// {
//     return price * .85; // we are not printing the price now we will return the price simply
// }

// OR SPECIFIC DISCOUNT

float discount(float price, int percentage);

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percent_Off = get_int ("Percent Off: "); // we used get_int coz the sale price can't be in decimal
    float sale = discount(regular, percent_Off); // (var discount) is basically ours (prototype) we assigned above and we linked the discount with (regular and percent off) var for specific sale amount
    printf("Sale Price: %.2F\n", sale);
}

float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100; // returning (price) is also a vairable we assigned inside the parentheses of prototype and in the end we divide it by 100 so we'll get .85, .70 .60 .something percentage
}

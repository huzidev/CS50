#include <stdio.h>
#include <cs50.c>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person; // name of ours typedef


int main(void)
{
    person people[2];

    people[0].name = "Huzi";
    people[0].number = "12345-456";

    people[1].name = "Ali";
    people[1].number = "12345-456-789";

    string a = get_string("", "name: ");
    for(int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name, a) == 0)// whenever we use (STRCMP) we've to use (== 0)
        {
            printf("found and number is %s\n", people[i].number);
            return 0; // if return 0 didn't works for some reason then it is sure that return 1 will work
        }
        else
        {
            printf("Not Found\n");
            return 1;
        }
    }
    // printf("Not Found\n");
    // return 1;
}

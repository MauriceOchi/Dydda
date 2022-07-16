#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;


int main (void)

{
    person people [3];

    people[0].name = "Dydda";
    people [0].number ="+25471342744";

    people[1].name = "Mzae";
    people[1].number = "+254722643822";

    people[2].name = "Mum";
    people[2].number = "+254720383349";
    {
    for (int i = 0; i < 3; i++)
        if (strcmp (people[i].name, "Mzae") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
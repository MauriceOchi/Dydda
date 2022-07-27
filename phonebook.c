/* A phonebook with 2 people
 * with name and number encapsulated in a struct
 * Calls strcmp to compare strings in names array over 2 iterations
 * returns found or not found
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct{
string name;
string number;
}person;

int main(void)
person people[2];
people[0].name = "Dydda";
people[0].number = "0713427435"

people[1].name = "Cynthia";
people[1].number = "0746327625";


for(int i = 0; i < 2; i++)
    if(strcmp(people[i].name, "Dydda") == 0)
    {
       {
           printf("Found %s\n", people[i].number);
           return 0;
       }
    }
printf("Not found\n");
return 1;
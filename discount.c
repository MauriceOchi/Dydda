#include <cs50.h>
#include <stdio.h>

float discount(float price);

int main (void)
{
    float regular = get_float("Regular Price: ");
    float sale = discount(regular);
    printf("Sales Price: %.2f\n", sale);
}




float discount(float price)
{
   return price * .85;

}
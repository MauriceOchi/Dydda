#include <stdio.h>

float discount(float price, int percentage);

int main (void)
{
    float regular
    printf("Regular Price: \n");
    scanf("%f", &regular);
    int percent_off 
    printf("Percent Off: \n");
    scanf("%d, &percent_off");
    float sale = discount(regular, percent_off);
    printf("Sales Price: %.f\n", sale);
}




float discount(float price, int percentage)
{
   return price * (100 - percentage) / 100;

}

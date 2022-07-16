#include <stdio.h>
#include <cs50.h>

float tax(float rate);
int main(void)
{
    float original_amount = get_float("Original Amount: ");

    float amount_with_tax = tax(original_amount);
    printf("Amount with tax: %.2f\n", amount_with_tax);
}

float tax(float rate)
{
     float original_amount = get_float("Original Amount: ");
    return original_amount * 1.05;
}
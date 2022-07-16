#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // constant makes it less prone to mistakes
    const int MINE = 2;
    int points = get_int("How many points did you lose? ");
    if (points <MINE)
    {
        printf("ypu lost fewer points.\n");
    }
    else if (points >MINE)
    {
        printf("you lost more points.\n");
    }
    else
    {
        printf("you lost the same number.\n");
    }

}
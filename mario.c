
#include <stdio.h>

int main (void)
{
    int n;

    do
    {
	    n = get_int("Enter Positive Number: ");
    }
    while(n < 1 || n > 8)

    //for each row
    for (int i = 1; i < n; i++)
    {
        //for each column
        for (int j = 0; j < i; j++)
        {
            //print a brick
             printf("#");
        }
         printf("\n");

    }


}

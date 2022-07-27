
#include <stdio.h>

int main (void)
{
    int n;

    do
    {
	    printf("Enter Positive Number Less than 8: \n");
        scanf("%d", &n);
    }while(n < 1 || n > 8);

    //for each row
    for(int i = 0; i < n; i++)
    {
        //for each column
        for(int j = 0; j < i+1; j++)
        {
            //print a brick
            printf("#");
             
        }
        printf("\n");

    }


}

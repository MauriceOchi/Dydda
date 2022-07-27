// Algorithm testing


#include <stdio.h>

int main(void)
{
    int n = 3;

    for(int i = 0; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
        {
           printf("#");
        }
    printf("\n");
    }

    return 0;     
}

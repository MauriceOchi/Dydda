#include <stdio.h>
//prints two hashes and a new line
//number of hashes depends on the value of n

int main(void)
{
    int n = 3;

    for (int j = 0 ; j <= n; j++)
    {
        for (int i = 0; i <= n; i++)
        {
            printf("#\n");
        }
    printf("\n");
    }
}

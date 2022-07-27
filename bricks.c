// Algorithm testing
// Prompts user for int and prints an inverted version of mario



#include <stdio.h>

int main(void)
{
    int n;
    puts("Enter number: \n");
    scanf("%d", &n);

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

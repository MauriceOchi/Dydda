#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int k;
    printf("Enter number: \n"); 
    scanf("%d", &k);

    int i;
    for(i = 1; i <= k; i++){
        {
        for(int j = 1; j <= i; j++)
            printf("%d", i);
        }
    printf("\n");
    }
    
    return 0;
}
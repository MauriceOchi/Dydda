#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* Prints last number of a random 
* number stored in a variable n
* return always true for success  
*/
int main (void)
{
    int n;
    srand(time(0));
	n = rand() - RAND_MAX / 2;
    
    printf("The last digit of %d is %d", n, n % 10);

    if (n % 10 > 5)
        printf("and is less than 5");
    else if(n % 10 < 5)
        printf("and is less than 5");

    return 0;
}
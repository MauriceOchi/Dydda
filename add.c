#include <stdio.h>

int main(void)
{
    int x, y;
    int result;
    printf("Enter First Number: \n");
    scanf("%d", &x);
    printf("Enter Second Number: \n");
    scanf("%d", &y);
 
    char 'a' 's' 'm' 'd';

    printf("What operation to perform? a,s,m,d: \n");
    scanf("%c", char);


    if(char == 'a')
    {
        result = x+y;
    }
    else if (char == 's')
    {
        result = x-y; 
    }
    else if(char == 'm')
    {
        result = x*y;
    }
    else
    {
        result = x/y;
    }
    printf("Result: %d\n", result);

    return 0;
}
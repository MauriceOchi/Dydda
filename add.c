#include <stdio.h>

int main(void)
{
    int x, y;
    int result;
    printf("Enter First Number: \n");
    scanf("%d", &x);
    printf("Enter Second Number: \n");
    scanf("%d", &y);
 
    char op[] = {'a', 's', 'm', 'd'};

    printf("What operation to perform? a,s,m,d: \n");
    scanf("%c", &op);


    if(op == 'a')
    {
        result = x+y;
    }
    else if (op == 's')
    {
        result = x-y; 
    }
    else if(op == 'm')
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
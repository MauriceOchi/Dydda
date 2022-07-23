/* takes input of numbers and adds them up to
* sum = 100 and prints "done" at the end
*/

#include <stdio.h>

int main(void)
{
    int sum = 0;
    int n = 0;

    do{
    printf("Enter number: \n");
    scanf("%d", &n);

    sum += n;
    }while(sum<=100);

    printf("Done. Sum is: %d\n", sum);
}
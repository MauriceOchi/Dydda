//convert a for loop to a do while loop

#include <stdio.h>

int main(void){
int sum;
int i = 0;

do{
    if (i % 4 == 0)
        sum = sum + 2;
    else if (i % 4 == 1)
        sum = sum - 6;
    else if (i % 4 == 2)
        sum = sum * 3;
    else if (i % 4 == 3)
        sum = sum / 2;

    i++;
} while (i <= 100);

printf("Sum is %d\n", sum);

return 0;
}

int main(void)
{
int sum;

for (int i = 0; i <= 100; i++) {
    if (i % 4 == 0)
        sum = sum + 2;
    else if (i % 4 == 1)
        sum = sum - 6;
    else if (i % 4 == 2)
        sum = sum * 3;
    else if (i % 4 == 3)
        sum = sum / 2;
}
printf("%d\n", sum);
}
#include <stdio.h>

int get_int(int);
int main(void)
{
    int max = get_int();

    max *= 2;
    printf("%d\n", max);

    return 0;
}

int get_int(int)
{
 int get_int(int);
    int x;
    printf("x: ");
    scanf("%i", &x);
    return x;
}
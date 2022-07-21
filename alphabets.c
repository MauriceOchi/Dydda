#include <stdio.h>

int main(void)
{
    int ch;

    for(ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);
    printf("\n");
    for(ch = 'A'; ch <= 'Z'; ch++)
        putchar(ch);
    
    return 0;
}

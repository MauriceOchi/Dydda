#include <stdio.h>
#include <stdbool.h>
int main(void){
char NextChar;
bool gotAt = false;
bool gotDot = false;

printf("Enter email address: ");
do {
    scanf("%c", &NextChar);
    if (NextChar == '@')
        gotAt = true;
    if (NextChar == '.')
        gotDot = true; 
} while (NextChar != ' ' && NextChar != '\n');

    if (gotAt && gotDot)
        printf("Your email is valid \n");
    else
     printf("Invalid email \n");
}
/*** a do while loop is better because you take the first character and perform computation on it
 * you then take the next as long as we have not reached the sentinel(space or newline)
 * char variablle to hold every character that will pass through the processor
 * two boolean variables for the target characters for any email address in the world
 * a simple IF-Else conditional based on AND logic of our two bool variables
 ***/ 

#include <stdio.h>
#include <stdbool.h>
int main(void){
char* NextChar;
bool gotAt = false;
bool gotDot = false;
bool gotAlpha1 = false;
bool gotAlpha2 = false;

printf("Enter email address: ");
do {
    scanf("%s", &NextChar);
    for(i = 0; i < )
    if (NextChar == '@')
        gotAt = true;
        if (NextChar-1 == 'a');
    if (NextChar == '.')
        gotDot = true; 
} while (NextChar != ' ' && NextChar != '\n');

    if (gotAt && gotDot)
        printf("Your email is valid\n");
    else
     printf("Invalid email\n");
}

// preceding the @ (at sign), at least one between the @ and the period,
// and at least one after the period.
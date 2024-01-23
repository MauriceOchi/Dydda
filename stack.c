#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define STACKLENGTH 5
#define EMPTY -1
#define STACK_EMPTY INT_MIN

int myStack[STACKLENGTH];
int top = EMPTY;


bool push(int value)
{
    if (top >= STACKLENGTH-1) return false;

    top++;
    myStack[top] = value;
    return true;

}

int pop()
{
    if (top == EMPTY) return STACK_EMPTY;

    int result = myStack[top];
    top--;
    return result;
}
int main(void)
{
    //pushing values to stack
    push(5);
    push(26);
    push(3);


    //a loop that pops and prints stack items
    for (int i = 0; i < STACKLENGTH; i++){
        int item = pop();
        printf("%d", item);
    }
    
    return 0; 
}
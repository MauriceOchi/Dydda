#include <stdio.h>
#include <string.h>

int main(void)
{
    char* name;
    puts("Enter name: ");
    scanf("10%s", name);
    int i;
    int n = strlen(name);

    for(i = 0; i < n; i++)
	    printf("%c", name[i]);
	   
    printf("\n");

    return 0;
}

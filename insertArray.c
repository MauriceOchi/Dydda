#include <stdio.h>
#define MAX 100

void main(void)
{
    int p[MAX], n, i, j, k;
    printf("Enter Array Length: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &p[i]);
    printf("\nArray is: \n");
    for(i=0; i<n; i++)
        printf("%d\n", p[i]);
    printf("\nEnter index to insert: ");
    scanf("%d", &k);
    k--;
    for(j=n-1; j>=k; j--)
        p[j+1] = p[j];
    printf("Enter value to insert: ");
    scanf("%d", &p[k]);
    printf("\nArray after insertion is: \n");
    for(i=0; i<n; i++)
        printf("%d\n", p[i]);
    
}
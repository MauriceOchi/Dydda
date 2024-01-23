
#include <stdio.h>

int main(void){
    int nums[] = {50, 22, 45, 69, 21, 59};
    int n;

    printf("Please enter a number to search: ");
    scanf("%d", &n);

    for(int i = 0; i < 6; i++){
        if(nums[i] == n){
        printf("Found \n");
        return 0;
        }
    }
    printf("Not Found \n");
    return 1;
}
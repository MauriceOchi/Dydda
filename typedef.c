#include <stdio.h>

typedef struct rect_tag{
    int left;
    int bottom;
    int right;
    int top;
} rect_t;
int main(void)
{
    rect_t myRect;
    myRect.bottom = 6;
    myRect.left = 3;
    myRect.top = 8;
    myRect.right = -1;

    printf("Bottom left = (%d, %d)\n", myRect.bottom, myRect.left);
    printf("Top right = (%d, %d)\n", myRect.top, myRect.right);
    
    printf("Second time to confirm.\n");

    printf("Bottom left = (%d, %d)\n", myRect.bottom, myRect.left);
    printf("Top right = (%d, %d)\n)", myRect.top, myRect.right);

    return 0;
}

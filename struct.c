/* creates a new struct data type with dimensions of a rectancle
 * prints the dimensions on console
 * returns 0
  */


#include <stdio.h>

struct rect_t{
    int left;
    int bottom;
    int right;
    int top;
};

int main(void)
{
 struct rect_t myRect;
 myRect.left = -4;
 myRect.bottom = 1;
 myRect.right = 8;
 myRect.top = 6;

 printf("Bottom left = (%d, %d)\n", myRect.bottom, myRect.left);
 printf("Top right = (%d, %d)\n", myRect.top, myRect.right);

 return 0;
}

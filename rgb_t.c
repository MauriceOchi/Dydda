/* if you have to change from int to char,
 * you only change at one point within the code
 * typedef makes your code easier to modify and read
 */

#include <stdio.h>

typedef unsigned int rgb_t;
rgb_t getRedForPixel(int x, int y)
rgb_t getGreenForPixel(int x, int y)
rgb_t getBlueForPixel(int x, int y)

int main(void)
{
    rgb_t red, green, blue;
    red = getRedForPixel(0, 0);
    green = getGreenForPixel(0, 0);
    blue = getBlueForPixel(0, 0);
}
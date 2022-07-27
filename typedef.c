#include <stdio.h>

//a rectangle of bottom, left, right, and top
typedef struct rect_tag{
    float left;
    float bottom;
    float right;
    float top;
} rect_t;
int main(void)
{
    rect_t myRect;
    myRect.bottom = 6;
    myRect.left = 3;
    myRect.top = 8;
    myRect.right = -1;

    rect intersection(rect r1, rect r2) {
        //make a rectangle (called ans) with
        rect ans;

        //left: maximum of r1 and r2 left
        ans.left = max(r1.left, r2.left);
        //bottom: maximum of r1 and r2 bottom
        ans.bottom = max(r1.bottom, r2.bottom);
        //right: minimum of r1 right and r2 right
        ans.right = min(r1.right, r2.right);
        //top: minimum of r1 and r2 top
        ans.top = min(r1.top, r2.top);
        //rectangle called ans is your answer
    }

    return ans;
}


//checks and returns the largest float
float max(float f1, float f2)
{

    if(f1 > f2)
    {
        return f1;
    }
    else 
        return f2;
}

float min(float f1, float f2)
{ 

    if(f1 < f2)
    {
        return f1;
    }
    else 
        return f2;
}
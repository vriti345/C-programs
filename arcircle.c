#include <stdio.h>
int main()
{
    float rad;
    float height;
    printf("enter the radius: \n");
    scanf("%f", &rad);
    printf("the area of circle is: %f \n", 3.14*rad*rad);
    printf("enter the height of cylinder: \n");
    scanf("%f", &height);
    printf("the area of cylinder is: %f \n", 2*3.14*rad*height+2*3.14*rad*rad);
    return 0;
}

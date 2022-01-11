#include <stdio.h>
float celfar(float c);
int main()
{
    float c;
    printf("enter the celcius temp \n");
    scanf("%f", &c);
    celfar(c);
    printf("the temp in farheneight is %f", celfar(c));
    return 0;
}

float celfar(float c)
{
    float far=1.8*c+32;
    return far;
}
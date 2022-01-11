#include <stdio.h>
float foa(float mass);
int main()
{
    float mass;
    int a=1;
    printf("enter your mass pls:\n");
    scanf("%f", &mass);
    foa(mass);
    printf("FOA on this body is %f\n", foa(mass));
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}

float foa(float mass)
{
    float foa=mass*9.8;
    return foa;
}

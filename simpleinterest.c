#include <stdio.h>
int main()
{
    int principle;
    int time;
    float rate;
    printf("enter the principle \n");
    scanf("%d", &principle);
    printf("enter the rate \n");
    scanf("%f", &rate);
    printf("enter the no. of years \n");
    scanf("%d", &time);
    printf("simple interest %f",principle*time*rate/100);
    return 0;
}

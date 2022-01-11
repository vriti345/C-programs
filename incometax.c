#include <stdio.h>
int main()
{
    float sal;
    printf("enter your sal in lakhs \n");
    scanf("%f", &sal);
    if(sal>=2.5 && sal<5.0)
    printf("tax is %f lakh", 0.05*sal);
    else if(sal>=5.0 && sal<10.0)
    printf("tax is %f lakh", 0.2*sal);
    else if(sal>=10.0)
    printf("tax is %f lakh", 0.05*sal);
    else
    printf("no tax for you!");
    return 0;
}
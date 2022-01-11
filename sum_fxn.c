#include <stdio.h>
int sum(int a,int b);
int main()
{   
    int a; int b;
    printf("enter the first no. \n");
    scanf("%d", &a);
    printf("enter the second no. \n");
    scanf("%d", &b);
       
    int c=sum(a,b);
    printf("the result of sum function is %d", c);
    return 0;
}

int sum(int a, int b)
{
    int result=a+b;
    return result;
}

#include <stdio.h>
int sum(int a,int b,int c);
int main()
{   
    int a; int b; int c;
    printf("enter the first no. \n");
    scanf("%d", &a);
    printf("enter the second no. \n");
    scanf("%d", &b);
    printf("enter the third no. \n");
    scanf("%d", &c);
       
    int d=sum(a,b,c);
    printf("the result of sum function is %d", d);
    return 0;
}

int sum(int a, int b, int c)
{
    int result=a+b+c;
    return result;
}
#include <stdio.h>
int fibo(int x);
int main()
{
    int x;
    printf("no. of terms you want in the fibo sequence:\n");
    scanf("%d", &x);
    for(int n=1; n<x+1; n++)
    {
        printf("%d", fibo(n));
        printf(",");
    }
    return 0;
}

int fibo(int x)
{
    int f;
    if(x==1)
    {
        f=0;
    }
    else if(x==2)
    {
        f=1;
    }
    else
    {
    f=fibo(x-1)+fibo(x-2);
    }
    return f;
}
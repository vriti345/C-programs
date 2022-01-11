#include <stdio.h>
int fibo(int x);
int main()
{
    int x;
    printf("which term of fibonacci sequence u want to see");
    scanf("%d", &x);
    fibo(x);
    printf("the %dth term of fibonacci sequence is %d", x, fibo(x));
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

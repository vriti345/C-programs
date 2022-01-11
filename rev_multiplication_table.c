#include <stdio.h>
int main()
{
    int n;
    printf("enter a no: \n");
    scanf("%d", &n);
    for(int i=10; i; i--)
    {
        printf("%d * %d =",n,i);
        printf("%d \n", n*i);
    }
    return 0;
}
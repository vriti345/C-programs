#include <stdio.h>
int main()
{
    int n;
    int fact=1;
    printf("enter the no.: \n");
    scanf("%d", &n);
    for(int i=1; (i<n+1); i++)
    {
        fact=fact*i;
    }
    printf("the factorial of %d is %d", n, fact);
    return 0;
}
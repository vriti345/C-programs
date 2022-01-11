#include <stdio.h>
int main()
{
    int n; 
    int i=1;
    int sum=0;
    printf("enter a no.:\n");
    scanf("%d", &n);
    for(i=1; (i<n+1); i++)
    {
        sum=sum+i;
    }
    printf("sum of first %d natural nos. is %d", n, sum);
    return 0;
}
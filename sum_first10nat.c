#include <stdio.h>
int main()
{
    int n; 
    int i=1;
    int sum=0;
    printf("enter a no.:\n");
    scanf("%d", &n);
    while(i<n+1)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of first %d natural nos. is %d", n, sum);
    return 0;
}
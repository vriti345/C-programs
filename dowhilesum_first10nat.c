#include <stdio.h>
int main()
{
    int n; 
    int i=1;
    int sum=0;
    printf("enter a no.:\n");
    scanf("%d", &n);
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<n+1);
    printf("sum of first %d natural nos. is %d", n, sum);
    return 0;
}
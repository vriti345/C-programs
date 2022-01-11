#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("you want the sum of how many natural nos\n");
    scanf("%d", &n);
    sum(n);
    printf("the sum of first %d natural nos is", n);
    return 0;
}
int sum(int n)
{
    int s;
    s=n*(n+1)/2;
    return s;
}
#include <stdio.h>
int main()
{
    int n;
    int i=1;
    printf("enter a no: \n");
    scanf("%d", &n);
    printf("********** \n");
    do
    {
        printf("%d \n", i);
        i++;
    } 
    while (i<n+1);
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    int i=1;
    printf("enter a no:\n");
    scanf("%d", &n);
    for(int i=1;(i<n+1);i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
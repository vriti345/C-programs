#include <stdio.h>
int main()
{
    int n;
    printf("enter a no: \n");
    scanf("%d", &n);
    for(int i=n; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}

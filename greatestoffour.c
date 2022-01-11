#include <stdio.h>
int main()
{
    int a;
    printf("enter first no \n");
    scanf("%d", &a);
    int b;
    printf("enter second no \n");
    scanf("%d", &b);
    int c;
    printf("enter third no \n");
    scanf("%d", &c);
    int d;
    printf("enter fourth no \n");
    scanf("%d", &d);

    if(a>b && a>c && a>d)
    printf("%d is greatest", a);
    else if(b>a && b>c && b>d)
    printf("%d is greatest", b);
    else if(c>a && c>b && c>d)
    printf("%d is greatest", c);
    else
    printf("%d is greatest", d);
    return 0;
}
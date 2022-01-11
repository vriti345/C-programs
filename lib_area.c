#include <stdio.h>
int area(int a);
int main()
{
    int side;
    printf("ente rthe value of side:\n");
    scanf("%d", &side);
    printf("the result of area function is %d", area(side));
    return 0;
}

int area(int a)
{
    int ar=a*a;
    return ar;
}
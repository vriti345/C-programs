#include <stdio.h>
int main()
{
    int input;
    printf("enter the no whose divisibility is to be checked: \n");
    scanf("%d", &input);
    printf("divisibility test returns %d", input%97);
    return 0;
}
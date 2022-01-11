#include <stdio.h>
int main()
{
    char input;
    printf("enter input");
    scanf("%c", &input);
    if(input>='a' && input<='z')
    printf("input is lowercase");
    else if(input>='A' && input<='Z')
    printf("input is uppercase");
    else
    printf("pls enter a letter from the keyboard");
    return 0;
}
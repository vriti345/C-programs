#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks: \n");
    scanf("%d", &marks);
    if(marks<=100 && marks>85)
    printf("grade A");
    else if(marks<=85 && marks>70)
    printf("grade B");
    else if(marks<=70 && marks>55)
    printf("grade C");
    else if(marks<=55 && marks>40)
    printf("grade D");
    else
    printf("you failed");
    return 0;
} 

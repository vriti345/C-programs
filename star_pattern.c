#include <stdio.h>
void star(int x);
int main()
{   
    int x;
    printf("enter no of lines of star pattern that you want\n");
    scanf("%d", &x);
    star(x);
    return 0;
}

void star(int x)
{   
    if(x==1){
        printf("*\n");
        return;
    }
    star(x-1);
    for(int n=1; (n<2*x) ; n++){
        printf("*");
    }
    printf("\n");
}
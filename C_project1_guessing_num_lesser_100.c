#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n;
    srand(time(NULL));
    char number=rand()%10;
    int c=0;
    while(n!=number)
    {   
        c=c+1;
        printf("user, pls enter a 1 digit number\n");
        scanf("%d", &n);
        if(n<number)
        {
            printf("greater no.\n");
            continue;
        }
        else if(n>number)
        {
            printf("smaller no.\n");
            continue;
        }
        else
        printf("CONGRATULATIONS! you guessed the correct number in %d trials \n",c);
        break;
    }
    return 0;
} 
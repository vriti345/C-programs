#include <stdio.h>
#include <string.h>
int main(){
    int startindex;
    int endindex;
    char str[50];
    printf("enter a string\n");
    scanf("%s",str);
    printf("initial string is %s\n",str);
    printf("enter startindex\n");
    scanf("%d",&startindex);
    printf("enter endindex\n");
    scanf("%d",&endindex);
    for(int i=startindex; i<endindex+1; i++){
        printf("%c",str[i]);
    }
    printf(": is the sliced string");
    return 0;
}
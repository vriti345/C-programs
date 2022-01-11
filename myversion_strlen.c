#include <stdio.h>
int main(){
    char str[50];
    char *ptr=str;
    printf("enter your name");
    scanf("%s",ptr);
    int c=0;
    while(*ptr!=0){
        c=c+1;
        ptr++;
    }
    printf("the length of string %s is %d",str,c);
    return 0;
}

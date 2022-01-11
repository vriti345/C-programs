#include <stdio.h>
int main(){
    char *ptr="Vriti";
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    printf("%s",ptr);
    return 0;
}
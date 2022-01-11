#include <stdio.h>
void occurence(char str[], char st){
    char *ptr=str;
    int c=0;
    while(*ptr!='\0'){
        if(*ptr==st){
            c=c+1;
        }
        ptr++;
    }
    printf("found %d times", c);
}

int main(){
    char str[50]="vritinargas";
    char st='a';
    occurence(str,st);
    return 0;
}


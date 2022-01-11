#include <stdio.h>
void occurence(char str[], char st){
    char *ptr=str;
    while(*ptr!='\0'){
        if(*ptr==st){
            printf("character present\n");
            break;
        }
        else
        ptr++;
    }
    if(*ptr=='\0'){
        printf("character not found\n");
    }
}

int main(){
    char str[50]="vritinargas";
    char st='b';
    occurence(str,st);
    return 0;
}


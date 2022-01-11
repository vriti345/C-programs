#include <stdio.h>
void ui(char st[]);
int main(){
    char *j="Vriti";
    char st[30];
    while(*j!='\0'){
        printf("%c",*j);
        j++;
    }
    printf("\n");
    ui(st);
    return 0;
}
void ui(char st[]){
    printf("enter any string");
    scanf("%s",st);
    printf("the string printed is %s",st);
}
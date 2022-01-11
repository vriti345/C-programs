#include <stdio.h>
void encrypt(char str[]){
    char *ptr=str;
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;
    }
}
void decrypt(char str[]){
    char *ptr=str;
    while(*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;
    }
}
int main(){
    char str[]="vriti";
    encrypt(str);
    printf("encrypted string is %s\n",str);
    decrypt(str);
    printf("the decrypted string is %s\n",str);
    return 0;
}
#include <stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("read3letters.txt","r");
    char c=fgetc(ptr);
    for(int i=0; i<4; i++){
        printf("%c\n",c);
        c=fgetc(ptr);
    }
    return 0;
}

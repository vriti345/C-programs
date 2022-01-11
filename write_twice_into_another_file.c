#include <stdio.h>
int main(){
    FILE *ptr=fopen("readfeelings.txt", "r");
    FILE *wrtr=fopen("writefeelings.txt", "r");
    char c=fgetc(ptr);
    while(c!=EOF){
        fputc(c, wrtr);
        c=fgetc(ptr);
    }
    fclose(ptr);
    fclose(wrtr);
    return 0;
}

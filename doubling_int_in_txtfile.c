#include <stdio.h>
int main(){
    FILE *ptr=fopen("int.txt", "r+");
    int num;
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    num=num*2;
    fprintf(ptr, "\n");
    fprintf(ptr, "%d", num);
    //printf("new num is %d", num);
    //fprintf(ptr,"%d", num);
    //return 0;
    //*(&num)=*(&num)*2;
    //fprintf(wrtr, "%d", num);
    fclose(ptr);
    return 0;
}

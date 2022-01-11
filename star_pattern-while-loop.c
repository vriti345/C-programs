#include <stdio.h>
int main(){
    int x=1;
    while(x<5){
        for(int n=1; (n<2*x) ; n++){
        printf("*");
        }
        printf("\n");
        x++;
    }
    return 0;
}

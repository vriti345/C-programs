#include <stdio.h>
typedef struct complex{
    int real;
    int img;
} complex;

int main(){
    complex collect[5];
    for(int i=0; i<5; i++){
        printf("enter real part\n");
        scanf("%d", &collect[i].real);
        printf("enter img part\n");
        scanf("%d", &collect[i].img);        
    }
    printf("the elements printed are:\n");
    for(int i=0; i<5; i++){
        printf("%d+%di",collect[i].real, collect[i].img);
        printf("\n");
    }
    return 0;
}
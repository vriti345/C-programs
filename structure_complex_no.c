#include <stdio.h>
typedef struct complex{
    int real;
    int img;
} complex;

int main(){
    complex c;
    printf("enter real part\n");
    scanf("%d", &c.real);
    printf("enter imaginary part\n");
    scanf("%d", &c.img);   
    printf("the complex no recorded is %d+%di", c.real, c.img);
    return 0;
}
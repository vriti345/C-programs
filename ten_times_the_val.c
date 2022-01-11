#include <stdio.h>
void tentimes(int *a);
int main(){
    int i;
    printf("enter the value of i:\n");
    scanf("%d", &i);
    printf("initial value of i: %d \n", i);
    tentimes(&i);
    printf("final value of i: %d \n", i);
    return 0;
}
void tentimes(int *a){
    int temp=10*(*a);
    *a=temp;
}
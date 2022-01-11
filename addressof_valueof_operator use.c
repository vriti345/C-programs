#include <stdio.h>
int main(){
    int a=6;
    printf("%u \n",&a);
    printf("the value of a is %d",*(&a));
    return 0;
}

#include <stdio.h>
void sumavg(int *a, int *b);
int main(){
    int x;
    printf("enter a no.:\n");
    scanf("%d", &x);
    int y;
    printf("enter a no.:\n");
    scanf("%d", &y);
    sumavg(&x, &y);
    return 0;
}
void sumavg(int *a, int *b){
    float sum=*a+*b;
    float avg=sum/2;
    printf("sum %f:\n",sum);
    printf("avg: %f \n", avg);
}
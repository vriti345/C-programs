#include <stdio.h>
int main(){
    int i;
    printf("enter the value of i:\n");
    scanf("%d", &i);
    int *j=&i;
    int **k=&j;
    printf("%d\n", *j);
    printf("%d\n",**k);
    return 0;
}
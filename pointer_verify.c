#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<11;i++){
        printf("enter the %dth element\n", i+1);
        scanf("%d", &arr[i]);
    }
    int *j=&arr[0];
    j=j+2;
    printf("%d should be the third element of the array\n", *j);
    return 0;
}

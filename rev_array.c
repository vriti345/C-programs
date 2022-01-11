#include <stdio.h>
void rev(int arr[],int n);

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter the %dth element \n", i+1);
        scanf("%d", &arr[i]);
    }
    printf("array before rev being printed \n");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
        printf(",");
    }
    printf("\n");
    rev(arr, 5);
    return 0;
}
void rev(int arr[], int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[n-i-1];
    }
    printf("array after rev being printed\n");
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
        printf(",");
    }
    printf("\n");
}
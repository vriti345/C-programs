#include <stdio.h>
void pi(int arr[],int n);

int main(){
    int arr[4];
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
    pi(arr, 5);
    return 0;
}
void pi(int arr[], int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            c=c+1;
        }
    }
    printf("the numebr of neg integers in array are %d", c);

}
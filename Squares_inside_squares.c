#include <stdio.h>
int main(){
    int n;
    printf("enter n pls");
    scanf("%d", &n);
    for(int i=n; i>0; i--){
        for(int j=n; j>i; j--){
            printf("%d ", j);
        }
        for(int k=0; k<(2*i)-1; k++){
            printf("%d ", i);
        }
        for(int a=i+1; a<n+1; a++){
            printf("%d ", a);
        }
        printf("\n");
    }
    for(int i=2; i<n+1; i++){
        for(int j=n; j>i; j--){
            printf("%d ", j);
        }
        for(int j=0; j<(2*i)-1; j++){
            printf("%d ", i);
        }
        for(int a=i+1; a<n+1; a++){
            printf("%d ", a);
        }
        printf("\n");
    }
    return 0;
}

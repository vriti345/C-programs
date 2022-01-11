#include <stdio.h>
int main(){
    int arr[3][10];
    for(int i=0; i<10; i++){
        arr[0][i]=2*(i+1);
        arr[1][i]=3*(i+1);
        arr[2][i]=7*(i+1);
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<10; j++){
            printf("%d", arr[i][j]);
            printf(",");
        }
        printf("**");
    }
    return 0;
}
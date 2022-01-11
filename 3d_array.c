#include <stdio.h>
int main(){
    int arr[4][3][2];
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<2; k++){
                printf("the address of arr[%d][%d][%d] is %u\n", i,j,k, &arr[i][j][k]);
            }
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main(){
    float *ptr=(float *)malloc(5 * sizeof(float));
    for(int i=0; i<5; i++){
        printf("7*%d=%d \n", i+1, 7*(i+1));
    }

    ptr=realloc(ptr, 15 * sizeof(float));
    for(int i=0; i<15; i++){
        printf("7*%d=%d \n", i+1, 7*(i+1));
    }
    return 0;
}


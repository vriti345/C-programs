#include <stdio.h>
#include <stdlib.h>
int main(){
    float *ptr=(float *)malloc(5 * sizeof(float));
    for(int i=0; i<5; i++){
        printf("enter the value of %d element \n", i+1);
        scanf("%f", &ptr[i]);
    }

    ptr=realloc(ptr, 10 * sizeof(float));
    for(int i=0; i<10; i++){
        printf("enter the value of %d element \n", i+1);
        scanf("%f", &ptr[i]);
    }
        for(int i=0; i<10; i++){
        printf("the value of %d element is %f \n", i+1, ptr[i]);
    }
    return 0;
}


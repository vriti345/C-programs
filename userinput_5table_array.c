#include <stdio.h>
int main(){
    int arr[9];
    int num;
    printf("which no.'s table u wanna see:\n");
    scanf("%d", &num);
    for(int i=0;i<10;i++){
        arr[i]=num*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d\n", arr[i]);
    }  
    return 0;
}
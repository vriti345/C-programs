#include <stdio.h>
int main(){
    int n;
    printf("whose table u want?:\n");
    scanf("%d", &n);
    FILE *ptr=fopen("writetable.txt", "w");
    for(int i=1; i<11; i++){
        fprintf(ptr, "%d * %d = %d", n, i, n*i);
        fprintf(ptr, "\n");
    }  
    return 0;
}

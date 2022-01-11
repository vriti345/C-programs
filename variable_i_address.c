#include <stdio.h>
void print(int a);
int main(){
    int i;
    printf("%u \n", &i);
    print(i);
    return 0;
}
void print(int a){
    printf("%u \n", &a);
}
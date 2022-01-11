#include <stdio.h>
typedef struct vector{
    int x;
    int y;
} vec;
int main(){
    vec xy;
    printf("enter x coordinate\n");
    scanf("%d", &xy.x);
    printf("enter y coordinate\n");
    scanf("%d", &xy.y);   
    printf("the vector typed is %di+%dj", xy.x, xy.y);
    return 0;
}

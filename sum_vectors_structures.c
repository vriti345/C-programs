#include <stdio.h>
typedef struct vector{
    int x;
    int y;
} vec;
void sum(vec a, vec b){
    int cx=a.x+b.x;
    int cy=a.y+b.y;
    printf("%di+%dj is the resultant vector", cx, cy);
}
int main(){
    vec xy;
    vec ab;
    printf("enter x coordinate\n");
    scanf("%d", &xy.x);
    printf("enter y coordinate\n");
    scanf("%d", &xy.y);   
    printf("enter 2nd x coordinate\n");
    scanf("%d", &ab.x);
    printf("enter 2nd y coordinate\n");
    scanf("%d", &ab.y);  
    sum(xy, ab); 
    return 0;
}

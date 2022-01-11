#include <stdio.h>
typedef struct emp{
    char name[10];
    int sal;
} emp;
int main(){
    emp e1;
    emp e2;
    printf("enter name for 1\n");
    scanf("%s", e1.name);
    printf("enter sal for 1\n");
    scanf("%d", &e1.sal);    
    printf("enter name for 2\n");
    scanf("%s", e2.name);
    printf("enter sal for 2\n");
    scanf("%d", &e2.sal);  
    FILE *ptr=fopen("employees.txt", "w");
    fprintf(ptr,"%s , %d \n", e1.name, e1.sal);
    fprintf(ptr,"%s , %d", e2.name, e2.sal);
    return 0;
}
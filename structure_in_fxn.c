#include <stdio.h>
typedef struct employee{
    int code;
    char name[10];
    float salary;
} emp;

void show(emp c){
    printf("code is %d\n", c.code);
    printf("name is %s\n", c.name);
    printf("salary is %f\n", c.salary);  
}

int main(){
    emp c;
    printf("enter name\n");
    scanf("%s", c.name);
    printf("enter code\n");
    scanf("%d", &c.code);
    printf("enter salary\n");
    scanf("%f", &c.salary);
    show(c);
    return 0;
}
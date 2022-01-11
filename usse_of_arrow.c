# include <stdio.h>
# include <string.h>
int main(){
    typedef struct employee{
        char name[10];
        float salary;
        int code;
    } emp;
    emp e1;
    printf("enter the name \n");
    scanf("%s",e1.name);
    printf("enter the sal\n");
    scanf("%f", &e1.salary);
    printf("enter the code\n");
    scanf("%d", &e1.code);
    emp *ptr=&e1;
    printf("the name recorded is %s", ptr->name);
    return 0;
}
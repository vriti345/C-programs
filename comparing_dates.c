#include <stdio.h>
typedef struct date{
    int day;
    int month;
    int year;
} date;

void cmp(date a, date b);
int main(){
    date d1;
    date d2;
    printf("enter dd for 1st\n");
    scanf("%d", &d1.day);
    printf("enter mm for 1st\n");
    scanf("%d", &d1.month);
    printf("enter yyyy for 1st\n");
    scanf("%d", &d1.year);
    printf("enter dd for 2nd\n");
    scanf("%d", &d2.day);
    printf("enter mm for 2nd\n");
    scanf("%d", &d2.month);
    printf("enter yyyy for 2nd\n");
    scanf("%d", &d2.year);
    cmp(d1,d2);
    return 0;
}
void cmp(date a, date b){
    if (a.year>b.year){
        printf("%d/%d/%d is a newer date", a.day, a.month, a.year);
    }
    else if (b.year>a.year){
        printf("%d/%d/%d is a newer date", b.day, b.month, b.year);
    }
    else if (a.month>b.month){
        printf("%d/%d/%d is a newer date", a.day, a.month, a.year);
    }
    else if (b.month>a.month){
        printf("%d/%d/%d is a newer date", b.day, b.month, b.year);
    }
    else if (a.day>b.day){
        printf("%d/%d/%d is a newer date", a.day, a.month, a.year);
    }
    else{
        printf("%d/%d/%d is a newer date", b.day, b.month, b.year);
    }
}


#include <stdio.h>
int main()
{
    int maths;
    printf("enter maths marks: \n");
    scanf("%d", &maths);

    int cs;
    printf("enter cs marks: \n");
    scanf("%d", &cs);

    int eng;
    printf("enter eng marks: \n");
    scanf("%d", &eng);

    int total=maths+cs+eng;
    if(total/3>=40 && maths>33 && cs>33 && eng>33)
    printf("you passed");
    else
    printf("you failed");
    return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int go=1;
    char choice;
    int number=rand()%3;
    char arr[3]={'r', 'p', 's'};
    printf("choose your choice: rock(R), paper(P), scissors(S)\n");
    scanf("%c", &choice);
    if(arr[number]=='r' && choice=='P'){
        printf("you win\n");
        printf("P.S. The computer chose ROCK\n");
    }
    else if(arr[number]=='p' && choice=='R'){
        printf("you lose\n");
        printf("P.S. The computer chose PAPER\n");
    }
    else if(arr[number]=='p' && choice=='S'){
        printf("you win\n");
        printf("P.S. The computer chose PAPER\n");
    }
    else if(arr[number]=='s' && choice=='P'){
        printf("you lose\n");
        printf("P.S. The computer chose SCISSORS\n");
    }
    else if(arr[number]=='s' && choice=='R'){
        printf("you win\n");
        printf("P.S. The computer chose SCISSORS\n");
    }
    else if(arr[number]=='r' && choice=='S'){
        printf("you lose\n");
        printf("P.S. The computer chose ROCK\n");
    }
    else{
        printf("its a tie\n");
    }

    return 0;
}



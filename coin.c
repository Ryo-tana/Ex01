#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(void){
        printf("What is your name?\n> ");
        char name[10];
        scanf("%s",name);
        printf("Hello, %s!\n",name);
        srand(time(NULL));
        printf("Rolling dice...\n");
        int d1 = rand()%6+1;
        sleep(1);
        int d2 = rand()%6+1;
        printf("Die 1: %d\nDie 2: %d\nTotal value: %d\n",d1,d2,d1+d2);
        if((d1+d2)>7){
                printf("You won\n");
        }else{
                printf("You lost\n");
        }
}

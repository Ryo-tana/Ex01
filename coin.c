#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(void){
        printf("What is your name?\n> ");
        char name[10];
        scanf("%s",name);
        printf("Hello, %s!\n",name);
}

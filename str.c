#include<stdio.h>
#include<string.h>
void main(){
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name),stdin);
    name[strlen(name) -1] = '\0';

    if(strlen(name) == 0){
        printf("You have not entered your name \n");
        printf("Please Re-Enter your name: ");
        fgets(name, sizeof(name),stdin);
    }

    else{
        printf("You have entered your name \n");
        printf("Please proceed");
    }
}
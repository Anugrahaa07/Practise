#include<stdio.h>
void main()
{
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=60){
        printf("You are a senior citizen");
    }

    else if(age>=18){
        printf("You are an Adult");
    }

    else if(age<=18 && age>0){
        printf("You are not an Adult");
    }

    else if(age == 0){
        printf("You are a New Born");
    }

    else if(age<0){
        printf("You havent been born yet");
    }


}
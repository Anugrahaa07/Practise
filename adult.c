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

}
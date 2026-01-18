#include<stdio.h>
#include<string.h>
void main(){
    double kg = 0.0;
    double pound = 0.0;
    int choice = 0;

    printf("Please Enter your required choice of conversion:\n1.Kilograms to pounds\n2.Pounds to Kilograms: \n");
    scanf("%d", &choice);

    if(choice==1){
        printf("Please enter the weight (kg): ");
        scanf("%lf", &kg);

        pound =kg * 2.2046;

        printf("The weight is %lf pounds",pound);
    }

    else if (choice == 2){
        printf("Please enter the weight (pounds): ");
        scanf("%lf", &pound);

        kg = pound * 0.4535;

        printf("The weight is %lf Kilograms",kg);
    }

    else{
        printf("You have not chosen the required option\nPlease try again");
        scanf("%d", &choice);

    }
}
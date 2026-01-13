//MADLIB GAME
#include<stdio.h>
#include<string.h>
int main(){
    char name[] = "";
    char noun[50] = "";
    char adj1[50] = "";
    char verb[50] = "";

    printf("Enter a name: "); //enter a name
    scanf("%s", &name);

    printf("Enter a noun(Her occupation): "); // enter a occupation
    scanf(" %s", &noun);

    printf("Enter an adjective(Her quality): "); //enter a quality
    scanf(" %s", &adj1);

    printf("Enter an verb(ing or action word): "); //enter action word
    scanf(" %s", &verb);

    printf("The name of the person is %s \n", name); 
    printf("He/she is a %s \n", noun);
    printf("He/she is a %s person \n",adj1);
    printf("He/she is %s \n", verb);

    return 0;
}